#include <any>
#include <string>

std::any compare(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (std::any_cast<int>(a) >= std::any_cast<int>(b)) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (std::any_cast<float>(a) >= std::any_cast<float>(b)) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::stof(std::any_cast<std::string>(a)) >= std::stof(std::any_cast<std::string>(b))) ? a : b;
    }

    return a; // Handle other types, return the first argument by default
}