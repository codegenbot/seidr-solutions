#include <cassert>
#include <variant>
#include <string>

std::variant<int, float, std::string> compare_one(const std::variant<int, float, std::string>& a, const std::variant<int, float, std::string>& b) {
    if (a.index() == 0 && b.index() == 0) {
        if (std::get<int>(a) > std::get<int>(b)) {
            return a;
        } else if (std::get<int>(a) < std::get<int>(b)) {
            return b;
        }
    } else if (a.index() == 1 && b.index() == 1) {
        if (std::get<float>(a) > std::get<float>(b)) {
            return a;
        } else if (std::get<float>(a) < std::get<float>(b)) {
            return b;
        }
    } else if (a.index() == 2 && b.index() == 2) {
        if (std::get<std::string>(a).empty() && std::get<std::string>(b).empty()) {
            return std::string();
        }
    }
    return std::variant<int, float, std::string>();
}

int main() {
    assert(std::get<std::string>(compare_one(std::string("1"), std::string("1"))).empty());

    return 0;
}