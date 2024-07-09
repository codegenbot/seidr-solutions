#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return a < bi ? b : (ai < bi ? a : boost::any("None"));
    }
    else if (is_any_of<a>(double.class)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return ad < bd ? b : (ad < bd ? a : boost::any("None"));
    }
    else {
        std::string as = any_cast<std::string>(a);
        std::string bs = any_cast<std::string>(b);
        return as.compare(bs) < 0 ? b : (as.compare(bs) > 0 ? a : boost::any("None"));
    }
}