#include <iostream>
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
            int aInt = std::get<int>(a);
            int bInt = std::get<int>(b);
            if (aInt > bInt) {
                return "Greater";
            } else if (aInt < bInt) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (std::holds_alternative<float>(a) && std::holds_alternative<float>(b)) {
            float aFloat = std::get<float>(a);
            float bFloat = std::get<float>(b);
            if (aFloat > bFloat) {
                return "Greater";
            } else if (aFloat < bFloat) {
                return "Less";
            } else {
                return "Equal";
            }
        } else {
            return "Non";
        }
    }, a, b);
}

int main() {
    std::string input1;
    int input2;

    std::cout << "Enter the first value: ";
    std::cin >> input1;

    std::cout << "Enter the second value: ";
    std::cin >> input2;

    auto result = compare_one(std::any(input1), std::any(input2));

    if (std::holds_alternative<stdstring>(result)) {
        std::cout << "The comparison is: " << std::get<std::string>(result) << std::endl;
    } else if (std::holds_alternative<int>(result)) {
        int value = std::get<int>(result);
        std::cout << "The comparison is: " << value << std::endl;
    } else {
        float value = std::get<float>(result);
        std::cout << "The comparison is: " << value << std::endl;
    }

    return 0;
}