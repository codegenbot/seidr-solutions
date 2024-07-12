```
#include <any>
#include <typeindex>
#include <memory>

std::any compare_one(std::any a, std::any b) {
    return std::visit(
        overload{
            [&](auto& a, auto& b) {
                int x = std::any_cast<int>(a);
                int y = std::any_cast<int>(b);
                return (x > y) ? a : ((y > x) ? b : a);
            },
            [](auto& a, auto& b) {
                float x = std::any_cast<float>(a);
                float y = std::any_cast<float>(b);
                return (x > y) ? a : ((y > x) ? b : a);
            },
            [](const auto& a, const auto& b) {
                std::string x = std::any_cast<std::string>(a);
                std::string y = std::any_cast<std::string>(b);
                // You can compare strings here
                return a;
            }
        }, a, b);
}