Here is the solution to the problem:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((bf > ai) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ai = boost::any_cast<int>(a);
        double bd = boost::any_cast<double>(b);
        return (ai > bd) ? a : ((bd > ai) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return (stoi(bs) > ai) ? b : ((ai > stoi(bs)) ? a : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : ((bi > af) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        float af = boost::any_cast<float>(a);
        double bd = boost::any_cast<double>(b);
        return (af > bd) ? a : ((bd > af) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return (stof(bs) > af) ? b : ((af > stof(bs)) ? a : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double ad = boost::any_cast<double>(a);
        int bi = boost::any_cast<int>(b);
        return (ad > bi) ? a : ((bi > ad) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        double ad = boost::any_cast<double>(a);
        float bf = boost::any_cast<float>(b);
        return (ad > bf) ? a : ((bf > ad) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double ad = boost::any_cast<double>(a);
        string bs = boost::any_cast<string>(b);
        return (stod(bs) > ad) ? b : ((ad > stod(bs)) ? a : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (stoi(as) > bi) ? a : ((bi > stoi(as)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return (stof(as) > bf) ? a : ((bf > stof(as)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string as = boost::any_cast<string>(a);
        double bd = boost::any_cast<double>(b);
        return (stod(as) > bd) ? a : ((bd > stod(as)) ? b : boost::any("None"));
    }
    
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if (boost::any_cast<int>(b) > boost::any_cast<int>(a))
        return b;
    else
        return boost::any("None");
}