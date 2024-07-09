#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double)) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);
        return da > db ? a : (da == db ? boost::any("None") : b);
    } else if (is_any_of<a>(std::string)) {
        std::string sa = any_cast<std::string>(a);
        std::string sb = any_cast<std::string>(b);
        return sa > sb ? a : (sa == sb ? boost::any("None") : b);
    } else {
        throw "Invalid input";
    }
}