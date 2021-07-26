#if 1
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

using namespace std;

int main()
{
    fstream fsread;
    pcl::PointCloud<pcl::PointXYZ> cloud;
    pcl::PCDWriter writer;

    fsread.open("/Home/MULLS/000000.txt");
    pcl::PointXYZ pclPnt;
    while(!fsread.eof())
    {
        fsread>>pclPnt.x>>pclPnt.y>>pclPnt.z;
        cloud.push_back(pclPnt);
    }
    fsread.close();
    writer.write("/Home/MULLS/000000.pcd",cloud);
    return 0;
}

#endif


