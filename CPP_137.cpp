#include <boost/any_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    } else if (boost::any_cast<int>(b) > boost::any_cast<int>(a)) {
        return b;
    } else {
        return "None";
    }
}