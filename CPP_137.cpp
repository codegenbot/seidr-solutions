#include <iostream>
#include <string>
#include <variant>

std::variant<int, float, std::string> compare_one(int a, std::variant<int, float, std::string> b) {
    if (std::holds_alternative<int>(b)) {
        int bi = std::get<int>(b);
        return (a > bi) ? a : (bi > a) ? bi : a;
    }
    else if (std::holds_alternative<float>(b)) {
        float bf = std::get<float>(b);
        return (a > bf) ? a : (bf > a) ? bf : a;
    }
    else {
        std::string bs = std::get<std::string>(b);
        return (stoi(bs) > a) ? stoi(bs) : (a > stoi(bs)) ? a : stoi(bs);
    }
}

int main() {
    assert(std::holds_alternative<std::string>(compare_one(1, "2")));
    // ... other code
}