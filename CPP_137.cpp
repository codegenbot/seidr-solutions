#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<std::string>(a) <= boost::any_cast<std::string>(b)) {
        return a;
    }
    else if (boost::any_cast<int>(a) <= boost::any_cast<int>(b)) {
        return a;
    }
    else if (boost::any_cast<double>(a) <= boost::any_cast<double>(b)) {
        return a;
    }
    else {
        return b;
    }
}