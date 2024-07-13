#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return (string)a > boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any_cast<double>(a) > (string)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((boost::any_cast<string>(a) == "None") || (boost::any_cast<string>(b) == "None")) {
            return boost::any("None");
        }
        return (boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int x = boost::lexical_cast<int>(s);
        return (int)a > x ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int x = boost::lexical_cast<int>(s);
        return x > (int)b ? a : b;
    }
    return boost::any("None");
}