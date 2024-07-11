Here is the completed code:

```cpp
#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return (ai > bi) ? a : ((bi > ai) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double ad = boost::any_cast<double>(a);
        double bd = boost::any_cast<double>(b);
        return (ad > bd) ? a : ((bd > ad) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string astr = boost::any_cast<string>(a);
        string bstr = boost::any_cast<string>(b);
        return (astr > bstr) ? a : ((bstr > astr) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && (b.type() == typeid(double) || b.type() == typeid(string))) {
        int ai = boost::any_cast<int>(a);
        double bd = boost::any_cast<double>(b);
        string bstr = boost::any_cast<string>(b);
        return (ai > bd) ? a : ((bd > ai) ? b : boost::any("None"));
    } else if ((a.type() == typeid(double) || a.type() == typeid(string)) && b.type() == typeid(int)) {
        double ad = boost::any_cast<double>(a);
        int bi = boost::any_cast<int>(b);
        string astr = boost::any_cast<string>(a);
        return (ad > bi) ? a : ((bi > ad) ? b : boost::any("None"));
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string astr = boost::any_cast<string>(a);
        double bd = boost::any_cast<double>(b);
        return (astr > to_string(bd)) ? a : ((to_string(bd) > astr) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double ad = boost::any_cast<double>(a);
        string astr = boost::any_cast<string>(b);
        return (ad > stod(astr)) ? a : ((stod(astr) > ad) ? b : boost::any("None"));
    }
}