```cpp
#include <iostream>
#include <string>

std::string toMiniRoman(int num);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The mini Roman numeral is: " << toMiniRoman(num) << "\n";
    return 0;
}

std::string toMiniRoman(int num) {
    if (num < 1) {
        return "";
    }
    
    int roman[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string romanStr[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    std::string result;
    
    for (int i = 0; num > 0 && i < 13; ++i) {
        while (num >= roman[i]) {
            num -= roman[i];
            result += romanStr[i];
        }
    }
    
    return result;
}