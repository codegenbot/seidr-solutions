```
#include <boost/any.hpp>
#include <string>
#include <wctype.h>

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
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wchar_t*)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wchar_t*))) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return any(typeid(std::string));
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wchar_t*)) &&
               (b.type() == typeid(double))) {
        std::string x = boost::any_cast<std::string>(a);
        double y = boost::any_cast<double>(b);
        if (std::stod(x) > y) return a;
        else if (std::stod(x) < y) return b;
        else return any(typeid(std::string));
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wchar_t*))) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > std::stod(y)) return a;
        else if (x < std::stod(y)) return b;
        else return any(typeid(double));
    } else {
        return any(typeid(void)); // Return void type for incompatible types
    }
}