#include <cassert>
#include <string>

std::string int_toRoman(int num) {
    const std::string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    std::string result;
    
    for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
        while (num >= values[i]) {
            num -= values[i];
            result += roman[i];
        }
    }
    
    return result;
}