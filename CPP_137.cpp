#include <any>
#include <string>
#include <type_traits>

namespace std {

std::any a;
std::any b;

bool compare_one(const std::any& first, const std::any& second) {
    if (first.type() == typeid(int) && second.type() == typeid(int)) {
        int x = any_cast<int>(first);
        int y = any_cast<int>(second);
        if (x > y) return true;
        else if (x < y) return false;
        else return true; // Tie, returns the first value
    } else if (first.type() == typeid(double) && second.type() == typeid(double)) {
        double x = any_cast<double>(first);
        double y = any_cast<double>(second);
        if (x > y) return true;
        else if (x < y) return false;
        else return true; // Tie, returns the first value
    } else if ((first.type() == typeid(std::string) || first.type() == typeid(std::wstring)) &&
               (second.type() == typeid(std::string) || second.type() == typeid(std::wstring)))) {
        std::string x = any_cast<std::string>(first);
        std::string y = any_cast<std::string>(second);
        if (x > y) return true;
        else if (x < y) return false;
        else return true; // Tie, returns the first value
    } else if ((first.type() == typeid(std::string) || first.type() == typeid(std::wstring)) &&
               (second.type() == typeid(double))) {
        std::string x = any_cast<std::string>(first);
        double y = any_cast<double>(second);
        if (std::stod(x) > y) return true;
        else if (std::stod(x) < y) return false;
        else return true; // Tie, returns the first value
    } else if ((first.type() == typeid(double)) &&
               (second.type() == typeid(std::string) || second.type() == typeid(std::wstring)))) {
        double x = any_cast<double>(first);
        std::string y = any_cast<std::string>(second);
        if (x > std::stod(y)) return true;
        else if (x < std::stod(y)) return false;
        else return true; // Tie, returns the first value
    } else {
        return true; // In case of mismatched types, consider the first type as larger
    }
}

bool compare() {
    return compare_one(a, b);
}