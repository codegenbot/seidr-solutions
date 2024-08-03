#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    double da;
    std::string sa;

    try {
        da = boost::any_cast<double>(a);
        if (boost::any_cast<double>(b) > da) {
            return b;
        } else if (da > boost::any_cast<double>(b)) {
            return a;
        }
    } catch (...) {
        try {
            sa = boost::any_cast<std::string>(a);
            if (sa < boost::any_cast<std::string>(b)) {
                return a;
            } else if (boost::any_cast<std::string>(b) < sa) {
                return b;
            }
        } catch (...) {
            return "None";
        }
    }

    return "None";
}