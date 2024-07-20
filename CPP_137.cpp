#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        return str1 > str2 ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = any_cast<float>(a);
        string s = any_cast<string>(b);
        return f > stof(s) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = any_cast<float>(b);
        string s = any_cast<string>(a);
        return stof(s) > f ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = any_cast<int>(a);
        string s = any_cast<string>(b);
        return i > stod(s) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int i = any_cast<int>(b);
        string s = any_cast<string>(a);
        return stod(s) > i ? a : b;
    }
    else {
        return boost::any("None");
    }
}