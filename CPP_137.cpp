#include <boost/any.hpp>
#include <string>
#include <cmath>

using namespace boost;

any greatest(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return a > y ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return x > y ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double y = boost::any_cast<double>(b);
        string x = boost::any_cast<string>(a);
        return stod(x) > y ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double x = boost::any_cast<double>(a);
        string y = boost::any_cast<string>(b);
        return x > stod(y) ? a : b;
    } else {
        return a;
    }
}