```cpp
#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return ai > bi ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return af > bf ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string astr = boost::any_cast<string>(a);
        string bstr = boost::any_cast<string>(b);
        return astr.compare(bstr) > 0 ? a : b;
    } else if ((a.type() == typeid(int) && b.type() == typeid(float)) ||
               (a.type() == typeid(float) && b.type() == typeid(int))) {
        int ai = boost::any_cast<int>(a);
        float bf = boost::any_cast<float>(b);
        return ai > bf ? a : b;
    } else if ((a.type() == typeid(int) && b.type() == typeid(string)) ||
               (a.type() == typeid(string) && b.type() == typeid(int))) {
        string astr = boost::any_cast<string>(a);
        int bi = boost::any_cast<int>(b);
        return ai > stoi(astr) ? a : b;
    } else if ((a.type() == typeid(float) && b.type() == typeid(string)) ||
               (a.type() == typeid(string) && b.type() == typeid(float))) {
        string astr = boost::any_cast<string>(a);
        float bf = boost::any_cast<float>(b);
        return stof(astr) > bf ? a : b;
    }

    return boost::any("None");
}