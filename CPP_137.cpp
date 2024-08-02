```
#include <any>
#include <string>
#include <vector>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double da = std::any_cast<double>(a);
        double db = std::any_cast<double>(b);
        return (da > db) ? a : ((da == db)) ? "None" : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string sa = std::any_cast<std::string>(a);
        std::string sb = std::any_cast<std::string>(b);
        return (std::stoi(sa) > std::stoi(sb)) ? a : ((std::stoi(sa) == std::stoi(sb))) ? "None" : b;
    } else {
        return "Invalid input type";
    }
}