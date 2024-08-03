#include <boost/any.hpp>
#include <boost/conversion.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<float>(a)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        if (af > bf)
            return a;
        else if (bf > af)
            return b;
        else
            return any("None");
    } else if (is_any_of<double>(a)) {
        double ad = boost::any_cast<double>(a);
        double bd = boost::any_cast<double>(b);
        if (ad > bd)
            return a;
        else if (bd > ad)
            return b;
        else
            return any("None");
    } else if (is_any_of<int>(a)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        if (ai > bi)
            return a;
        else if (bi > ai)
            return b;
        else
            return any("None");
    } else if (is_string(a)) {
        std::string as = boost::any_cast<std::string>(a);
        std::string bs = boost::any_cast<std::string>(b);
        try {
            float af = std::stof(as);
            float bf = std::stof(bs);
            if (af > bf)
                return a;
            else if (bf > af)
                return b;
            else
                return any("None");
        } catch (...) {
            return any("None");
        }
    } else {
        return any("None");
    }
}