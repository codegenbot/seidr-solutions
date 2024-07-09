```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> romanMap = {{std::make_pair(1000, "M"), std::make_pair(900, "CM")}, {std::make_pair(500, "D"), std::make_pair(400, "CD")},
                                           {std::make_pair(100, "C"), std::make_pair(90, "XC")},
                                           {std::make_pair(50, "L"), std::make_pair(40, "XL")}, 
                                           {std::make_pair(10, "X"), std::make_pair(9, "IX")},
                                           {std::make_pair(5, "V"), std::make_pair(4, "IV"), std::make_pair(1, "I")}};

std::string int_to_roman(int number) {
    std::string roman = ""; // Initialize the string
    for (const auto& pair : romanMap) {
        for(const auto& p: pair) {
            while (number >= p.first) {
                number -= p.first;
                roman += p.second;
            }
        }
    }
    return roman;
}

int main() {
    for(int i = 1; i <= 3999; i++) { 
        std::cout << i << ": " << int_to_roman(i) << std::endl;
    }
    assert(int_to_roman(1000) == "M");
    return 0;
}