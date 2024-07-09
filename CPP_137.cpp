#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) 
        return a;
    else if ((boost::any_cast<string>(a)).compare((boost::any_cast<string>(b))) > 0)
        return a;
    else
        return b;
}