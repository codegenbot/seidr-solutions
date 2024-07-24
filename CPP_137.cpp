#include <boost/variant.hpp> 
#include <string>
#include <iostream>

std::variant<std::string, int, float> compare_one(std::variant<boost::any> a, std::variant<boost::any> b) {
    if (auto *int_a = boost::get<int>(a); auto *int_b = boost::get<int>(b)) {
        return std::to_string(std::max(*int_a, *int_b));
    } else if (auto *float_a = boost::get<float>(a); auto *float_b = boost::get<float>(b)) {
        return std::to_string(std::max(*float_a, *float_b));
    } else if (auto *str_a = boost::get<std::string>(a); auto *str_b = boost::get<std::string>(b)) {
        if (*str_a > *str_b) {
            return *str_a;
        } else {
            return *str_b;
        }
    } else {
        return 0;
    }
}