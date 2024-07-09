Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) {
            return a;
        } else if (strA < strB) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
        string strA = boost::any_cast<string>(b);
        int intB = boost::any_cast<int>(a);
        return (strA > to_string(intB)) ? b : a;
    }
    if ((a.type() == typeid(float) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(float))) {
        string strB = boost::any_cast<string>(b);
        float fltA = boost::any_cast<float>(a);
        return (strB > to_string(fltA)) ? b : a;
    }
    if ((a.type() == typeid(double) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(double))) {
        string strB = boost::any_cast<string>(b);
        double dblA = boost::any_cast<double>(a);
        return (strB > to_string(dblA)) ? b : a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        return (intA > intB) ? a : ((intA < intB) ? b : boost::any("None"));
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fltA = boost::any_cast<float>(a);
        float fltB = boost::any_cast<float>(b);
        return (fltA > fltB) ? a : ((fltA < fltB) ? b : boost::any("None"));
    }
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double dblA = boost::any_cast<double>(a);
        double dblB = boost::any_cast<double>(b);
        return (dblA > dblB) ? a : ((dblA < dblB) ? b : boost::any("None"));
    }
    return a;
}