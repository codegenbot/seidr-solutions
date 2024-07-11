#include <boost/any.hpp>
#include <string>
#include <xlocale>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y ? &a : (y > x ? &b : boost::any(typeid(bool))));
    } else if ((a.type() == typeid(float) || a.type() == typeid(double)) &&
               (b.type() == typeid(float) || b.type() == typeid(double))) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y ? &a : (y > x ? &b : boost::any(typeid(bool))));
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(std::wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(std::wstring))) {
        std::wstring s1 = boost::any_cast<std::wstring>(a);
        std::wstring s2 = boost::any_cast<std::wstring>(b);
        if (s1 > s2)
            return a;
        else if (s2 > s1)
            return b;
        else
            return boost::any(typeid(bool));
    } else {
        return boost::any(typeid(bool));
    }
}