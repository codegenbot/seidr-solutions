#include <boost/any.hpp>
#include <boost/convert.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } 
    } 
    else if (a.type() == typeid(double)) {
        if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
            return a;
        } else if (boost::any_cast<double>(a) < boost::any_cast<double>(b)) {
            return b;
        }
    } 
    else {
        return "None";
    }
}