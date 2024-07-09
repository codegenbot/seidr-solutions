```cpp
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::pair<int, std::string>> romanMap;

int main() {
    romanMap.push_back({ 1000, "M" });
    romanMap.push_back({ 900, "CM" });
    romanMap.push_back({ 500, "D" });
    romanMap.push_back({ 400, "CD" });
    romanMap.push_back({ 100, "C" });
    romanMap.push_back({ 90, "XC" });
    romanMap.push_back({ 50, "L" });
    romanMap.push_back({ 40, "XL" });
    romanMap.push_back({ 10, "X" });
    romanMap.push_back({ 9, "IX" });
    romanMap.push_back({ 5, "V" });
    romanMap.push_back({ 4, "IV" });
    romanMap.emplace_back(1, "I");

    for(int i = 1; i <= 3999; i++) { 
        std::cout << i << ": " << int_to_roman(i) << std::endl;
    }
    assert(int_to_roman(1000) == "M");
    return 0;
}

std::string int_to_roman(int number) {
    std::string roman = ""; // Initialize the string
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}