#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int i = any_cast<int>(a);
        float f = any_cast<float>(b);
        return (i > f) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = any_cast<float>(a);
        int i = any_cast<int>(b);
        return (f > i) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        if (s1 > s2) return a;
        else if (s2 > s1) return b;
        else return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = any_cast<string>(a);
        float f = any_cast<float>(b);
        if (stod(s) > f) return a;
        else if (f > stod(s)) return b;
        else return boost::any("None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = any_cast<float>(a);
        string s = any_cast<string>(b);
        if (f > stod(s)) return a;
        else if (stod(s) > f) return b;
        else return boost::any("None");
    }
    return a;
}