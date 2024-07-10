#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return a;
        } else if (x < y) {
            return b;
        } else {
            return boost::any(0);
        }
    }

    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y) {
        return a;
    } else if (x < y) {
        return b;
    } else {
        return boost::any(0.0);
    }
}