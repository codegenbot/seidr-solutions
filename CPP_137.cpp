#include <variant>
#include <any>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    return std::visit([](auto&& a, auto&& b) {
        if (auto str_a = std::any_cast<std::string>(a); auto str_b = std::any_cast<std::string>(b)) {
            return (str_a > str_b) ? str_a : str_b;
        } else if (auto int_a = std::any_cast<int>(a); auto int_b = std::any_cast<int>(b)) {
            return std::to_string(std::max(int_a, int_b));
        } else if (auto float_a = std::any_cast<float>(a); auto float_b = std::any_cast<float>(b)) {
            return std::to_string(std::max(float_a, float_b));
        } else {
            return 0;
        }
    }, a, b);
}