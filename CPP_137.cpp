#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    double da;
    std::string sa;

    try {
        da = boost::any_cast<double>(a);
        if (boost::any_cast<double>(b) > da) {
            return b;
        } else if (da > boost::any_cast<double>(b)) {
            return a;
        } else {
            return boost::any();
        }
    } catch (...) {
        try {
            sa = boost::any_cast<std::string>(a);
            if (boost::any_cast<std::string>(b) > sa) {
                return b;
            } else if (sa > boost::any_cast<std::string>(b)) {
                return a;
            } else {
                return boost::any();
            }
        } catch (...) {
            return boost::any();
        }
    }
}