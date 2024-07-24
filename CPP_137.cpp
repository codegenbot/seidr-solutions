#include <variant>
#include <any>

std::variant<std::string, int, float> compare_one(std::variant<any> a, std::variant<any> b) {
    if (auto *int_a = std::get_if<int>(a); auto *int_b = std::get_if<int>(b)) {
        return to_string(std::max(*int_a, *int_b));
    } else if (auto *float_a = std::get_if<float>(a); auto *float_b = std::get_if<float>(b)) {
        return to_string(std::max(*float_a, *float_b));
    } else if (auto *str_a = std::get_if<std::string>(a); auto *str_b = std::get_if<std::string>(b)) {
        return (*str_a > *str_b) ? *str_a : *str_b;
    } else {
        // Handle all other cases or unexpected inputs
        return 0;
    }
}