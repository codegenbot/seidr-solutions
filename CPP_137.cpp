#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a > boost::any_cast<string>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)a > (double)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1.compare(str2) > 0 ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : b;
    }
    return boost::any("None");
}