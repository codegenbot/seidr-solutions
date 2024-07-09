#include <string>
#include <vector>
#include <iostream>

std::string int_to_mini_roman(int number) {
    std::vector<std::pair<int, std::string>> romans = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                                         {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                                         {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    std::string result = "";
    
    for (const auto& roman : romans) {
        while (number >= roman.first) {
            number -= roman.first;
            result += roman.second;
        }
    }
    
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Roman numeral is: " << int_to_mini_roman(num) << '\n';
    return 0;
}