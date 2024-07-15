#include <vector>
#include <string>
#include <iostream>

std::string int_to_mini_roman(int number){
    std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    std::string result = "";
    
    for (int i = 0; i < values.size(); ++i) {
        while (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        }
    }
    
    return result;
}

int main() {
    int num;
    std::cin >> num;
    std::string roman_numeral = int_to_mini_roman(num);
    std::cout << roman_numeral;
    
    return 0;
}