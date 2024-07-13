#include <iostream>
#include <cassert>

std::string intToMiniRoman(int n) {
    const std::string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
    
    std::string result;
    for (int i = 0; i < 13; ++i) {
        while (n >= val[i]) {
            n -= val[i];
            result += roman[i];
        }
    }
    return result;
}

int main_test() {
    std::cout << intToMiniRoman(1999) << std::endl;
    assert(intToMiniRoman(1000) == "M");
    return 0;
}