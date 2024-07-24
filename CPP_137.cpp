#include <string>
#include <algorithm>
#include <variant>
#include <any>

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b);

std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    using namespace std;
    return visit([](auto&& a, auto&& b) -> variant<string, int, float> {
        if (any_cast<string>(a) > any_cast<string>(b)) {
            return any_cast<string>(a);
        } else if (any_cast<int>(a) > any_cast<int>(b)) {
            return to_string(max(any_cast<int>(a), any_cast<int>(b)));
        } else if (any_cast<float>(a) > any_cast<float>(b)) {
            return to_string(max(any_cast<float>(a), any_cast<float>(b)));
        } else {
            return "0";
        }
    }, a, b);
}