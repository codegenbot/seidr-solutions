#include <vector>
#include <string>
#include <initializer_list>
#include <cassert>

std::vector<std::pair<int, std::string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

std::string int_to_roman(int number) {
    std::string result;
    for (auto pair : roman) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
    return result;
}

int main() {
    assert(int_to_roman(1000) == "M");
    assert(int_to_roman(1999) == "MCMXCIX");
    assert(int_to_roman(2024) == "MMXXIV");
    return 0;
}