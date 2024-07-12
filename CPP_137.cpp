#include <any>
#include <string>
#include <iomanip>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = std::any_cast<int>(a);
        int y = std::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = std::any_cast<float>(a);
        float y = std::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = std::any_cast<std::string>(a);
        std::string y = std::any_cast<std::string>(b);
        return (std::stof(x) > std::stof(y)) ? a : ((std::stof(y) > std::stof(x)) ? b : a);
    } else {
        return a;
    }
}