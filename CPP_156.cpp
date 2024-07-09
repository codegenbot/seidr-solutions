```
#include <iostream>
#include <vector>
#include <string>

std::string int_to_mini_roman(int num) {
    std::vector<std::pair<int, std::string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    std::string result = "";
    for (const auto& pair : roman) {
        while (num >= pair.first) {
            num -= pair.first;
            result += pair.second;
        }
    }
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Mini Roman numeral representation is: " << int_to_mini_roman(num) << std::endl;
    return 0;
}