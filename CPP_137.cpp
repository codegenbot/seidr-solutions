#include <variant>
#include <any>
#include <string>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    return visit([](auto&& a, auto&& b) -> std::variant<std::string, int, float> {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return "None";
        } else if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return "None";
        } else {
            return "0";
        }
    }, a, b);
}