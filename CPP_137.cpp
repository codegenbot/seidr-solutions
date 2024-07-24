#include <string>
#include <algorithm>
#include <variant>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    return std::visit([&](auto&& a, auto&& b) -> std::variant<std::string, int, float> {
        if (std::get<std::string>(a) > std::get<std::string>(b)) {
            return std::get<std::string>(a);
        } else if (std::get<int>(a) > std::get<int>(b)) {
            return std::to_string(std::max(std::get<int>(a), std::get<int>(b)));
        } else if (std::get<float>(a) > std::get<float>(b)) {
            return std::to_string(std::max(std::get<float>(a), std::get<float>(b)));
        } else {
            return "0";
        }
    }, a, b);
}