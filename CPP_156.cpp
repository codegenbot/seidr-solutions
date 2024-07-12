#include <iostream>
#include <cassert>
#include <string>

std::string intToMiniRoman(int n) {
    std::string roman;
    const char* values[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int i = 0;
    while (n > 0) {
        if (n >= val[i]) {
            n -= val[i];
            roman += values[i]; 
        } else {
            i++;
        }
    }
    return roman;
}

int main() {
    assert(intToMiniRoman(1000) == "M");
    std::cout << intToMiniRoman(1999) << std::endl;
    return 0;