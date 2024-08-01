```cpp
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a < b ? &b : &a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a < b ? &b : &a;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(float) || b.type() == typeid(double))) {
        string s = a.convert_to<string>();
        float f = stof(s);
        int i = (int)f;
        return (i < b ? &b : &a);
    }
    else if ((a.type() == typeid(float) || a.type() == typeid(double)) && b.type() == typeid(int)) {
        return (a.convert_to<string>().c_str()) < boost::any_cast<int>(b) ? &a : &b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = a.convert_to<string>();
        string s2 = b.convert_to<string>();
        return (stof(s1) < stof(s2) ? &a : &b);
    }
    return boost::any();
}