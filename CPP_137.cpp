Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : (b.convert_to<boost::any>()).type();
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : (b.convert_to<boost::any>()).type();
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : (b.convert_to<boost::any>()).type();
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : (b.convert_to<boost::any>()).type();
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = boost::any_cast<string>(a);
        float f = boost::any_cast<float>(b);
        return stof(s) > f ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return stod(s) > d ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return stof(s) > i ? a : (boost::any(b)).type();
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = boost::any_cast<string>(a);
        string s2 = boost::any_cast<string>(b);
        return stod(s1) > stod(s2) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string s = boost::any_cast<string>(b);
        return f > stof(s) ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::any_cast<double>(a);
        string s = boost::any_cast<string>(b);
        return d > stod(s) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        return i > stof(s) ? a : b;
    }
    else {
        return "None";
    }
}