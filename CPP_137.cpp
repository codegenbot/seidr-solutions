```cpp
#include <boost/any.hpp>
#include <string>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return ai > bi ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return ai > bf ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float af = boost::any_cast<float>(a);
        int bi = boost::any_cast<int>(b);
        return af > bi ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string astr = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return astr > to_string(bi) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string astr = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return astr > to_string(bf) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int ai = boost::any_cast<int>(a);
        string astr = boost::any_cast<string>(b);
        return ai > stoi(astr) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float af = boost::any_cast<float>(a);
        string astr = boost::any_cast<string>(b);
        return af > stof(astr) ? a : b;
    }

    return boost::any("None");
}