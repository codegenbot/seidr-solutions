Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <boost/functional/hash.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((bf > ai) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ai = boost::any_cast<int>(a);
        double bd = boost::any_cast<double>(b);
        return (ai > bd) ? a : ((bd > ai) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : ((bi > af) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double ad = boost::any_cast<double>(a);
        int bi = boost::any_cast<int>(b);
        return (ad > bi) ? a : ((bi > ad) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (stof(as) > bi) ? a : ((bi > stof(as)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return (stof(as) > bf) ? a : ((bf > stof(as)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string as = boost::any_cast<string>(a);
        double bd = boost::any_cast<double>(b);
        return (stod(as) > bd) ? a : ((bd > stod(as)) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (stod(as) > stod(bs)) ? a : ((stod(bs) > stod(as)) ? b : boost::any("None"));
    } else {
        return b;
    }
}