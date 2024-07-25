#include <any>
#include <boost/any.hpp>
#include <string>

namespace std {
    using namespace boost;

    std::any a;
    std::any b;

    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return a;
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring))) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return a;
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double))) {
        std::string x = boost::any_cast<std::string>(a);
        double y = boost::any_cast<double>(b);
        if (std::stod(x) > y) return a;
        else if (std::stod(x) < y) return b;
        else return a;
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring))) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > std::stod(y)) return a;
        else if (x < std::stod(y)) return b;
        else return a;
    } else {
        return a;
    }
}