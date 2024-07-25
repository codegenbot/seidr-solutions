#include <iostream>
#include <boost/any.hpp>
using namespace boost;

any compare(const any& a, const any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return any(typeid(int));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return any(typeid(double));
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(boost::wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(boost::wstring))) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return any(typeid(std::string));
    } else {
        return any(typeid(void)); // Return void type for incompatible types
    }
}