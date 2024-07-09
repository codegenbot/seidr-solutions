#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ai = boost::any_cast<int>(a);
        double bd = boost::any_cast<double>(b);
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        float af = boost::any_cast<float>(a);
        double bd = boost::any_cast<double>(b);
        return (af > bd) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        istringstream iss(as);
        float af;
        iss >> af;
        return (af > bf) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string as = boost::any_cast<string>(a);
        double bd = boost::any_cast<double>(b);
        istringstream iss(as);
        double af;
        iss >> af;
        return (af > bd) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        istringstream iss(as);
        int af;
        iss >> af;
        return ((af > bi) ? a : (bi > af) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (as > bs) ? a : b;
    }
    return boost::any("None");
}