#include <iostream>
#include <variant>
#include <boost/any.hpp>
#include <string>
#include <algorithm>

std::variant<std::string, int, float> compare_one(std::variant<boost::any> a, std::variant<boost::any> b) {
    if (auto *str_a = boost::get<std::string>(a); auto *str_b = boost::get<std::string>(b)) {
        return (*str_a > *str_b) ? *str_a : *str_b;
    } else if (auto *int_a = boost::get<int>(a); auto *int_b = boost::get<int>(b)) {
        return std::to_string(std::max(*int_a, *int_b));
    } else if (auto *float_a = boost::get<float>(a); auto *float_b = boost::get<float>(b)) {
        return std::to_string(std::max(*float_a, *float_b));
    } else {
        return 0;
    }
}

int main() {
    int num1, num2;
    char op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the operator (+ or -): ";
    std::cin >> op;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if (op == '+') {
        return std::variant<std::string, int, float>(num1 + num2);
    } else if (op == '-') {
        return std::variant<std::string, int, float>(num1 - num2);
    }

    return 0;
}