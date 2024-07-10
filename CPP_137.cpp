#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
    }

    if (boost::any_cast<double>(a) > boost::any_cast<double>(b)) {
        return a;
    } else if (boost::any_cast<double>(a) < boost::any_cast<double>(b)) {
        return b;
    }

    return b.type() == typeid(int) ? a : b;
}