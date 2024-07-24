#include <initializer_list>
#include <variant>
#include <string>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    return std::visit([&](auto&& a, auto&& b) -> std::variant<std::string, int, float> {
        if (std::holds_alternative<std::any>(a) && std::holds_alternative<int>(b)) {
            if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
                return "Greater";
            } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (std::holds_alternative<std::any>(a) && std::holds_alternative<float>(b)) {
            if (std::any_cast<int>(a) > std::any_cast<float>(b)) {
                return "Greater";
            } else if (std::any_cast<int>(a) < std::any_cast<float>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else {
            return "Non";
        }
    }, a, b);
}