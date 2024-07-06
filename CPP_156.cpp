```cpp
#include <cassert>
#include <string>
#include <map>

std::string int_toRoman(int num) {
    std::map<int, std::string> romanMap = {{1000, "M"}, {900, "CM"},
                                            {500, "D"}, {400, "CD"},
                                            {100, "C"}, {90, "XC"},
                                            {50, "L"}, {40, "XL"},
                                            {10, "X"}, {9, "IX"},
                                            {5, "V"}, {4, "IV"},
                                            {1, "I"}};

    std::string roman;
    for (auto it = romanMap.begin(); it != romanMap.end(); ++it) {
        while (num >= it->first) {
            roman += it->second;
            num -= it->first;
        }
    }

    return roman;
}

int main() {
    assert(int_toRoman(1000) == "M");
    return 0;
}