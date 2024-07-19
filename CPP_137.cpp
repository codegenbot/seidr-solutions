#include <any>
#include <string>
#include <sstream>
#include <cassert>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return std::any_cast<int>(a) > std::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return std::any_cast<float>(a) > std::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float valA = stof(std::any_cast<std::string>(std::any_cast<std::string>(a)));
        float valB = stof(std::any_cast<std::string>(std::any_cast<std::string>(b)));
        return valA > valB ? a : (valA < valB ? b : std::string("None"));
    } else {
        return std::string("None"); // Default case if types are not handled correctly
    }
}