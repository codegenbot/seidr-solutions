#include <iostream>
#include <string>

std::string intToMiniRoman(int n) {
    if (n <= 0)
        return "0";
    std::string roman = "";
    const char* val[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int num[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int i = 0;
    while (n > 0) {
        if (n >= *std::make_heap(num + i, num + i + 1)) {
            n -= *std::make_heap(num + i, num + i + 1);
            roman += *(val + i);
        } else
            i++;
    }
    return roman;
}

int main() {
    std::cout << intToMiniRoman(1999) << std::endl;
    return 0;
}