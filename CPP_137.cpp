#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return a;
        } else if (x < y) {
            return b;
        } else {
            return boost::any(typeid(int));
        }
    } 
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y) {
            return a;
        } else if (x < y) {
            return b;
        } else {
            return boost::any(typeid(double));
        }
    } 
    else {
        return boost::any(typeid(int));
    }
}