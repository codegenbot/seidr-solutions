#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a,boost::any b){
    boost::any_max max_type = boost::any_cast<boost::any_max>(a.type());
    if (max_type == boost::any_max::typeless)
        return boost::any_cast<double>(a) > boost::any_cast<double>(b) ? a : b == a ? boost::any("None") : b;
    else if (max_type == boost::any_max::string)
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : b == a ? boost::any("None") : b;
    else
        return boost::any_cast<double>(a) > boost::any_cast<double>(b) ? a : b == a ? boost::any("None") : b;
}