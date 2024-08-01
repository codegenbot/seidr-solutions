#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : (b < (float)1 ? "None" : b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : (b < (double)1 ? "None" : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : (b < 1 ? "None" : boost::any(b));
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : (b < 1 ? "None" : boost::any(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string s = (string)a;
        float f = (float)b;
        return f > atof(s.c_str()) ? a : (f < 1 ? "None" : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = (string)a;
        double d = (double)b;
        return d > atof(s.c_str()) ? a : (d < 1 ? "None" : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = (float)a;
        string s = (string)b;
        return atof(s.c_str()) > f ? boost::any(b) : (f < 1 ? "None" : a);
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = (double)a;
        string s = (string)b;
        return atof(s.c_str()) > d ? boost::any(b) : (d < 1 ? "None" : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = (string)a, sb = (string)b;
        return sa > sb ? a : (sa == sb ? boost::any("None") : b);
    }
    return a;
}