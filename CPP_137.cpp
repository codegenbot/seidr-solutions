#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        if (ai > bi)
            return a;
        else if (bi > ai)
            return b;
        else
            return any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double ad = boost::any_cast<double>(a);
        double bd = boost::any_cast<double>(b);
        if (ad > bd)
            return a;
        else if (bd > ad)
            return b;
        else
            return any("None");
    } else if ((a.type() == typeid(string) && b.type() == typeid(double)) ||
               (a.type() == typeid(double) && b.type() == typeid(string))) {
        string as = boost::any_cast<string>(a);
        double bd = boost::any_cast<double>(b);
        return (stod(as) > bd) ? a : ((bd > stod(as)) ? b : any("None"));
    } else if ((a.type() == typeid(string) && b.type() == typeid(string))) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (stod(as) > stod(bs)) ? a : ((stod(bs) > stod(as)) ? b : any("None"));
    }
    return any("None");
}