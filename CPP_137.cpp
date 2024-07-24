Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = (string)b;
        int pos = s.find(',');
        double d1 = stod(s.substr(0, pos));
        double d2 = stod(s.substr(pos + 1));
        return d1 > (double)a ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = (string)a;
        int pos = s.find(',');
        double d1 = stod(s.substr(0, pos));
        double d2 = stod(s.substr(pos + 1));
        return d1 > (double)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = (string)a;
        string s2 = (string)b;
        int pos1 = s1.find(',');
        int pos2 = s2.find(',');
        double d1 = stod(s1.substr(0, pos1));
        double d2 = stod(s2.substr(0, pos2));
        if (d1 > d2) return a;
        else if (d1 < d2) return b;
        else return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}