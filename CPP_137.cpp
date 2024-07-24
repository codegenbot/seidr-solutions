#include <string>
#include <algorithm>
#include <variant>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    return std::visit([&](auto&& a, auto&& b) -> std::variant<std::string, int, float> {
        if (std::holds_alternative<std::string>(a) && std::holds_alternative<std::string>(b)) {
            if (std::get<std::string>(a) > std::get<std::string>(b)) {
                return "Greater";
            } else if (std::get<std::string>(a) < std::get<std::string>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (std::holds_alternative<int>(a) && std::holds_alternative<int>(b)) {
            if (std::get<int>(a) > std::get<int>(b)) {
                return "Greater";
            } else if (std::get<int>(a) < std::get<int>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (std::holds_alternative<float>(a) && std::holds_alternative<float>(b)) {
            if (std::get<float>(a) > std::get<float>(b)) {
                return "Greater";
            } else if (std::get<float>(a) < std::get<float>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else {
            return "Non";
        }
    }, a, b);
}