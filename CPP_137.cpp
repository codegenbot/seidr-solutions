#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return std::to_string(ai).compare(std::to_string(bi));
    }
    else if (is_any_of<a>(double.class)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return (std::to_string(ad) + "_").compare((std::to_string(bd) + "_"));
    }
    else {
        std::string as = any_cast<std::string>(a);
        std::string bs = any_cast<std::string>(b);
        return as.compare(bs);
    }
}