#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (boost::any_cast<std::string>(a).compare(boost::any_cast<std::string>(b)) <= 0) {
        return a;
    } else {
        return b;
    }
}