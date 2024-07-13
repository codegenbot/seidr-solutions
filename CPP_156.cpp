#include <iostream>
#include <cassert>

std::string intToMiniRoman(int n) {
    const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    std::string result;
    
    for (int i = 0; i < 13; ++i) {
        while (n >= value[i]) {
            n -= value[i];
            result += roman[i];
        }
        
        if (n == 0)
            break;
    }
    
    return result;
}

int main_test() {
    std::cout << intToMiniRoman(1999) << std::endl;
    assert(intToMiniRoman(1000) == "M");
    return 0;
}