```cpp
#include <string>
#include <vector>
#include <iostream>

std::string int_toMiniRoman(int number) {
    std::vector<std::pair<int, std::string>> romanMap = {{std::make_pair(1000, "M"), {std::make_pair(900, "CM")}},
                                            {std::make_pair(500, "D"), {std::make_pair(400, "CD")}},
                                            {std::make_pair(100, "C"), {std::make_pair(90, "XC")}},
                                            {std::make_pair(50, "L"), {std::make_pair(40, "XL")}},
                                            {std::make_pair(10, "X"), {std::make_pair(9, "IX")}},
                                            {std::make_pair(5, "V"), {std::make_pair(4, "IV"), {1, "I"}}}};
    std::string roman = "";
    for (const auto& pair : romanMap) {
        for (auto p : pair) {
            while (number >= p.first) {
                number -= p.first;
                roman += p.second;
            }
        }
    }
    return roman;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The mini Roman numeral is: " << int_toMiniRoman(num) << "\n";
    return 0;
}