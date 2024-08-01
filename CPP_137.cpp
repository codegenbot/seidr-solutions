```c++
#include <boost/variant/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : (b < (float)1 ? boost::any("None") : b);
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : (b < (double)1 ? boost::any("None") : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : (b < 1 ? boost::any("None") : b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : (b < 1 ? boost::any("None") : b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string s = (std::string)a;
        float f = (float)b;
        return f > atof(s.c_str()) ? a : (f < 1 ? boost::any("None") : b);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string s = (std::string)a;
        double d = (double)b;
        return d > atof(s.c_str()) ? a : (d < 1 ? boost::any("None") : b);
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float f = (float)a;
        std::string s = (std::string)b;
        return atof(s.c_str()) > f ? b : (f < 1 ? boost::any("None") : a);
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double d = (double)a;
        std::string s = (std::string)b;
        return atof(s.c_str()) > d ? b : (d < 1 ? boost::any("None") : a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string sa = (std::string)a, sb = (std::string)b;
        return sa > sb ? a : (sa == sb ? boost::any("None") : b);
    }
    return a;
}