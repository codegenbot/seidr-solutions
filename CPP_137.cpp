```
#include <string>
#include <algorithm>
#include <variant>
#include <any>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    return visit([](auto&& a, auto&& b) -> std::variant<std::string, int, float> {
        if (std::any_cast<std::string>(a) > std::any_cast<std::string>(b)) {
            return std::any_cast<std::string>(a);
        } else if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return std::to_string(std::max(std::any_cast<int>(a), std::any_cast<int>(b)));
        } else if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return std::to_string(std::max(std::any_cast<float>(a), std::any_cast<float>(b)));
        } else {
            return "0";
        }
    }, a, b);
}