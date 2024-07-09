#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(int.class)) {
        int ai = any_cast<int>(a);
        int bi = any_cast<int>(b);
        if (ai > bi) return a;
        else if (bi > ai) return b;
        else return "None";
    }
    else if (is_any_of<a>(double.class)) {
        double ad = any_cast<double>(a);
        double bd = any_cast<double>(b);
        if (ad > bd) return a;
        else if (bd > ad) return b;
        else return "None";
    }
    else {
        std::string as = any_cast<std::string>(a);
        std::string bs = any_cast<std::string>(b);
        if (as > bs) return a;
        else if (bs > as) return b;
        else return "None";
    }
}