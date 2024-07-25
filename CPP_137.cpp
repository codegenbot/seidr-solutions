```cpp
#include <any>
#include <string>
#include <type_traits>

namespace std {

std::any a;
std::any b;

auto compare_one(auto& x, auto& y) -> std::any {
    if (x.type() == typeid(int) && y.type() == typeid(int)) {
        int X = any_cast<int>(x);
        int Y = any_cast<int>(y);
        if (X > Y) return x;
        else if (X < Y) return y;
        else return x;
    } else if (x.type() == typeid(double) && y.type() == typeid(double)) {
        double X = any_cast<double>(x);
        double Y = any_cast<double>(y);
        if (X > Y) return x;
        else if (X < Y) return y;
        else return x;
    } else if ((x.type() == typeid(std::string) || x.type() == typeid(std::wstring)) &&
               (y.type() == typeid(std::string) || y.type() == typeid(std::wstring))) {
        std::string X = any_cast<std::string>(x);
        std::string Y = any_cast<std::string>(y);
        if (X > Y) return x;
        else if (X < Y) return y;
        else return x;
    } else if ((x.type() == typeid(std::string) || x.type() == typeid(std::wstring)) &&
               (y.type() == typeid(double))) {
        std::string X = any_cast<std::string>(x);
        double Y = any_cast<double>(y);
        if (std::stod(X) > Y) return x;
        else if (std::stod(X) < Y) return y;
        else return x;
    } else if ((x.type() == typeid(double)) &&
               (y.type() == typeid(std::string) || y.type() == typeid(std::wstring))) {
        double X = any_cast<double>(x);
        std::string Y = any_cast<std::string>(y);
        if (X > std::stod(Y)) return x;
        else if (X < std::stod(Y)) return y;
        else return x;
    } else {
        return x;
    }
}

auto compare(auto& a, auto& b) -> std::any {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int X = any_cast<int>(a);
        int Y = any_cast<int>(b);
        if (X > Y) return a;
        else if (X < Y) return b;
        else return a;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double X = any_cast<double>(a);
        double Y = any_cast<double>(b);
        if (X > Y) return a;
        else if (X < Y) return b;
        else return a;
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(std::wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(std::wstring))) {
        std::string X = any_cast<std::string>(a);
        std::string Y = any_cast<std::string>(b);
        if (X > Y) return a;
        else if (X < Y) return b;
        else return a;
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(std::wstring)) &&
               (b.type() == typeid(double))) {
        std::string X = any_cast<std::string>(a);
        double Y = any_cast<double>(b);
        if (std::stod(X) > Y) return a;
        else if (std::stod(X) < Y) return b;
        else return a;
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(std::wstring))) {
        double X = any_cast<double>(a);
        std::string Y = any_cast<std::string>(b);
        if (X > std::stod(Y)) return a;
        else if (X < std::stod(Y)) return b;
        else return a;
    } else if ((a.type() == typeid(std::any)) &&
               (b.type() == typeid(std::any))) {
        return compare_one(a, b);
    } else {
        return a;
    }
}

}