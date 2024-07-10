```cpp
#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<double>(a) > boost::any_cast<double>(b))
        return a;
    else if (boost::any_cast<double>(b) > boost::any_cast<double>(a))
        return b;
    else
        return "None";
}