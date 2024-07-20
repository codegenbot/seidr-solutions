#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double va = boost::any_cast<double>(b);
        return va < 0.01 || va > -0.01 ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double vb = boost::any_cast<double>(b);
        return vb < 0.01 || vb > -0.01 ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string va = boost::any_cast<string>(a);
        string vb = boost::any_cast<string>(b);
        return va > vb ? a : b;
    }
    return "None";
}