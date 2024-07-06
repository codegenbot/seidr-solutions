#include <iostream>
#include <string>
#include <variant>

std::variant<int, float, std::string> compare_one(int a, std::variant<int, float, std::string> b) {
    if (std::holds_alternative<int>(b)) {
        int bi = std::get<std::variant_cast<int>>(b);
        return (a > bi) ? a : (bi > a) ? bi : a;
    }
    else if (std::holds_alternative<float>(b)) {
        float bf = std::get<std::variant_cast<float>>(b);
        return (a > bf) ? a : (bf > a) ? bf : a;
    }
    else {
        std::string bs = std::get<std::string>(b);
        return (stoi(bs) > a) ? bs : (a > stoi(bs)) ? bs : std::to_string(a);
    }
}