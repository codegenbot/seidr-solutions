#include <iostream>
#include <string>

std::string intToMiniRoman(int n) {
    if (n <= 0)
        return "0";
    std::string roman = "";
    const char* sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int i = 0;
    while (n > 0) {
        if (n >= val[i]) {
            n -= val[i];
            roman += sym[i];
        } else
            i++;
    }
    return roman;
}

int main() {
    std::cout << intToMiniRoman(1999) << std::endl;
    return 0;
}