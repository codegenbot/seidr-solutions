```
#include <iostream>
#include <string>

std::string intToMiniRoman(int n) {
    if (n <= 0)
        return "0";
    std::string roman = "";
    const char* val[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    for(int i = 12; i >= 0 && n > 0; --i) {
        while(n >= num[i]) {
            n -= num[i];
            roman += val[i];
        }
    }
    return roman;
}

int main() {
    std::cout << intToMiniRoman(1999) << std::endl;
}