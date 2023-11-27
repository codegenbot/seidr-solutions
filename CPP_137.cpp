#include <any>
#include <string_view>
#include <algorithm>
#include <cassert>
#include <string>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = std::any_cast<int>(a);
        int num2 = std::any_cast<int>(b);
        return std::max(num1, num2);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = std::any_cast<float>(a);
        float num2 = std::any_cast<float>(b);
        return std::max(num1, num2);
    } else if (a.type() == typeid(std::string_view) && b.type() == typeid(std::string_view)) {
        std::string_view str1 = std::any_cast<std::string_view>(a);
        std::string_view str2 = std::any_cast<std::string_view>(b);
        return std::max(str1, str2, [](const std::string_view& s1, const std::string_view& s2) { return s1 < s2; });
    }
    return std::any();
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}