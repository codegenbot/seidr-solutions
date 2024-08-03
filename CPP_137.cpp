#include <boost/any.hpp>
#include <string>

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
            return boost::any(string("Equal"));
    } else if (is_any_of<double>(a)) {
        double ad = boost::any_cast<double>(a);
        double bd = boost::any_cast<double>(b);
        if (ad > bd)
            return a;
        else if (bd > ad)
            return b;
        else
            return boost::any(string("Equal"));
    } else if (is_any_of<int>(a)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        if (ai > bi)
            return a;
        else if (bi > ai)
            return b;
        else
            return boost::any(string("Equal"));
    } else if (is_string(a)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        double af = stof(as);
        double bf = stof(bs);
        if (af > bf)
            return a;
        else if (bf > af)
            return b;
        else
            return boost::any(string("Equal"));
    } else {
        return boost::any(string("Invalid Type"));
    }
}