#include <vector>
#include <string>
#include <iostream>

std::string int_to_mini_roman(int num) {
    std::vector<std::pair<int, std::string>> roman_map = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    std::string roman = "";
    
    for (const auto& pair : roman_map) {
        while (num >= pair.first) {
            num -= pair.first;
            roman += pair.second;
        }
    }
    
    return roman;
}

int main() {
    std::cout << int_to_mini_roman(1000) << std::endl;
    return 0;
}