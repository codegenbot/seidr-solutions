#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (boost::any_cast<double>(a) > boost::any_cast<double>(b)) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return (strA > strB) ? a : b;
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) && (b.type() == typeid(string))) {
        double numA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        return (numA > stod(strB)) ? a : b;
    } else if ((a.type() == typeid(string) || a.type() == typeid(double)) && (b.type() == typeid(int))) {
        double numB = boost::any_cast<double>(b);
        string strA = boost::any_cast<string>(a);
        return (stod(strA) > numB) ? a : b;
    } else {
        return boost::any("None");
    }
}