```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> romanMap;

std::string int_to_mini_romank(int number) {
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            std::cout << pair.second;
        }
    }
    return "";
}

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
    romanMap.emplace_back(1, "I");

    for(int i = 1; i <= 3999; i++) { 
        std::cout << i << ": " << int_to_mini_romank(i) << std::endl;
    }
}