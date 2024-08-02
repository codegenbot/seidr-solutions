```cpp
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((ai < bi) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return (af > bf) ? a : ((af < bf) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        return (as > bs) ? a : ((as < bs) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return (ai > bf) ? a : ((ai < bf) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string bs = boost::any_cast<string>(b);
        return (ai > stoi(bs)) ? a : ((ai < stoi(bs)) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return (af > bi) ? a : ((af < bi) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string bs = boost::any_cast<string>(b);
        return (af > stof(bs)) ? a : ((af < stof(bs)) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string as = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return (stof(as) > bi) ? a : ((stof(as) < bi) ? b : boost::any("None")));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string as = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return (stof(as) > bf) ? a : ((stof(as) < bf) ? b : boost::any("None")));
    }
    else {
        return a;
    }
}