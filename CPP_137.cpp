#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        return boost::any((long long)ai - (long long)bi);
    } 
    else if (is_any_of<a>(double.class)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        return boost::any(std::to_string(ad) + "_" + std::to_string(bd) + "_");
    }
    else {
        std::string as = any_cast<std::string>(a);
        std::string bs = any_cast<std::string>(b);
        return boost::any(as + bs);
    }
}