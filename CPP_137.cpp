#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strA > strB ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int numA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        return to_string(numA) > strB ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int numB = boost::any_cast<int>(b);
        return strA > to_string(numB) ? a : b;
    }
    return boost::any();
}