#include <any>
#include <string>

namespace std {

std::any a;
std::any b;

auto compare(std::any& x, std::any& y) -> std::any {
    if (x.type() == typeid(int) && y.type() == typeid(int)) {
        int xi = std::any_cast<int>(x);
        int yi = std::any_cast<int>(y);
        if (xi > yi) return x;
        else if (xi < yi) return y;
        else return x;
    } else if (x.type() == typeid(double) && y.type() == typeid(double)) {
        double xi = std::any_cast<double>(x);
        double yi = std::any_cast<double>(y);
        if (xi > yi) return x;
        else if (xi < yi) return y;
        else return x;
    } else if ((x.type() == typeid(std::string) || x.type() == typeid(wstring)) &&
               (y.type() == typeid(std::string) || y.type() == typeid(wstring)))) {
        std::string xi = std::any_cast<std::string>(x);
        std::string yi = std::any_cast<std::string>(y);
        if (xi > yi) return x;
        else if (xi < yi) return y;
        else return x;
    } else if ((x.type() == typeid(std::string) || x.type() == typeid(wstring)) &&
               (y.type() == typeid(double))) {
        std::string xi = std::any_cast<std::string>(x);
        double yi = std::any_cast<double>(y);
        if (std::stod(xi) > yi) return x;
        else if (std::stod(xi) < yi) return y;
        else return x;
    } else if ((x.type() == typeid(double)) &&
               (y.type() == typeid(std::string) || y.type() == typeid(wstring)))) {
        double xi = std::any_cast<double>(x);
        std::string yi = std::any_cast<std::string>(y);
        if (xi > std::stod(yi)) return x;
        else if (xi < std::stod(yi)) return y;
        else return x;
    } else {
        return x;
    }
}

int main() {
    a = 5; b = 3;
    std::cout << std::any_cast<int>(compare(a, b)) << std::endl;

    a = 3.5; b = 2.8;
    std::cout << std::any_cast<double>(compare(a, b)) << std::endl;

    a = "hello"; b = "world";
    std::cout << std::any_cast<std::string>(compare(a, b)) << std::endl;
}