```cpp
#include <string>
#include <vector>
#include <ostream>
#include <iostream>

std::vector<std::pair<int, std::string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                                    {400, "CD"}, {100, "C"}, {90, "XC"},
                                                    {50, "L"}, {40, "XL"}, {10, "X"},
                                                    {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

std::string romanToInt(int number) {
    std::string result = "";
    for (const auto &romanNumber : roman) {
        while (number >= romanNumber.first) {
            number -= romanNumber.first;
            result += romanNumber.second;
        }
    }
    if(number > 0)
        return "Cannot represent in Roman numerals: " + std::to_string(number); 
    else
        return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Mini Roman representation of the number is: " << romanToInt(num) << std::endl;
    return 0;
}