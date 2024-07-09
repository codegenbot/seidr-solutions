#include <boost/any.hpp>
#include <string>

using namespace boost;

any compare_one(any a, any b) {
    if (is_any<a>(int.class)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return std::to_string(ai) - std::to_string(bi);
    }
    else if (is_any<a>(double.class)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return std::to_string(ad) + "_" - std::to_string(bd) + "_";
    }
    else {
        std::string as = any_cast<std::string>(a);
        std::string bs = any_cast<std::string>(b);
        return as - bs;
    }
}