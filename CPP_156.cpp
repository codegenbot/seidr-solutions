```
#include <cassert>
#include <string>
#include <iostream>

std::string intToMiniRoman(int num) {
    std::string roman;
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (num > 0) {
        if (num >= val[i]) {
            num -= val[i];
            roman += sym[i];
        } else {
            i++;
        }
    }
    return roman; 
}

int main() { 
    assert(intToMiniRoman(1000) == "M");
    std::cout << intToMiniRoman(4) << std::endl;
    if (intToMiniRoman(1) != "I") assert(false);
    if (intToMiniRoman(5) != "V") assert(false);
    if (intToMiniRoman(9) != "IX") assert(false);
    if (intToMiniRoman(10) != "X") assert(false);
    if (intToMiniRoman(40) != "XL") assert(false);
    if (intToMiniRoman(50) != "L") assert(false);
    if (intToMiniRoman(90) != "XC") assert(false);
    if (intToMiniRoman(100) != "C") assert(false);
    if (intToMiniRoman(400) != "CD") assert(false);
    if (intToMiniRoman(500) != "D") assert(false);
    if (intToMiniRoman(900) != "CM") assert(false);
    if (intToMiniRoman(1000) != "M") assert(false);
    std::cout << intToMiniRoman(4) << std::endl;
}