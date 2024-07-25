#include <iostream>
#include <string>

std::string intToMiniRoman(int number) {
    std::string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    std::string result;
    
    for (int i = 0; i < 13; ++i) {
        while (number >= value[i]) {
            number -= value[i];
            result += roman[i];
        }
    }
    
    return result;
}

int main() {
    std::cout << intToMiniRoman(1000) << std::endl;
    return 0;
}