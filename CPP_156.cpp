```cpp
#include <cassert>
#include <string>
#include <vector>

std::string int_toRoman(int num) {
    std::vector<std::pair<int, std::string>> romans = {{1000, "M"}, {900, "CM"},
        {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"},
        {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"},
        {5, "V"}, {4, "IV"}, {1, "I"}};
    std::string result;
    
    for (const auto& roman : romans) {
        while (num >= roman.first) {
            num -= roman.first;
            result += roman.second;
        }
    }
    return result;
}

int main() {
    assert(int_toRoman(1000) == "M");
    return 0;
}