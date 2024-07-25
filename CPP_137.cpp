#include <any>
#include <string>
#include <type_traits>

namespace std {

std::any a;
std::any b;

if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = any_cast<int>(a);
    int y = any_cast<int>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if (a.type() == typeid(double) && b.type() == typeid(double)) {
    double x = any_cast<double>(a);
    double y = any_cast<double>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if ((a.type() == typeid(std::string) || a.type() == typeid(std::wstring)) &&
           (b.type() == typeid(std::string) || b.type() == typeid(std::wstring))) {
    std::string x = any_cast<std::string>(a);
    std::string y = any_cast<std::string>(b);
    if (x > y) return a;
    else if (x < y) return b;
    else return a;
} else if ((a.type() == typeid(std::string) || a.type() == typeid(std::wstring)) &&
           (b.type() == typeid(double))) {
    std::string x = any_cast<std::string>(a);
    double y = any_cast<double>(b);
    if (std::stod(x) > y) return a;
    else if (std::stod(x) < y) return b;
    else return a;
} else if ((a.type() == typeid(double)) &&
           (b.type() == typeid(std::string) || b.type() == typeid(std::wstring))) {
    double x = any_cast<double>(a);
    std::string y = any_cast<std::string>(b);
    if (x > std::stod(y)) return a;
    else if (x < std::stod(y)) return b;
    else return a;
} else {
    return a;
}
return b; // Added the missing else
}