#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                                    {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                                    {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

std::string int_to_roman(int number) {
    std::string result = "";
    for (auto p : roman) {
        while (number >= p.first) {
            result += p.second;
            number -= p.first;
        }
    }
    
    // Continue subtracting and adding Roman numerals until the number becomes zero
    if(number > 0) {
        result = "Invalid Input";
    }
    
    return result;
}