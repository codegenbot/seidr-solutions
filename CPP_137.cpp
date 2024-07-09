```cpp
#include <boost/any.hpp>
#include <string>

using namespace std;

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
            return boost::any(string("None"));
        }
    }
    if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
        int intA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        return (to_string(intA) > strB) ? a : b;
    }
    if ((a.type() == typeid(float) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(float))) {
        float fltA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        return (to_string(fltA) > strB) ? a : b;
    }
    if ((a.type() == typeid(double) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(double))) {
        double dblA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        return (to_string(dblA) > strB) ? a : b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        return (intA > intB) ? a : ((intA < intB) ? b : boost::any(string("None")));
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fltA = boost::any_cast<float>(a);
        float fltB = boost::any_cast<float>(b);
        return (fltA > fltB) ? a : ((fltA < fltB) ? b : boost::any(string("None")));
    }
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double dblA = boost::any_cast<double>(a);
        double dblB = boost::any_cast<double>(b);
        return (dblA > dblB) ? a : ((dblA < dblB) ? b : boost::any(string("None")));
    }
    return a;
}