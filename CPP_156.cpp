#include <iostream>
#include <string>

struct RomanPair {
    int value;
    std::string symbol;
};

std::string intToMiniRoman(int num) {
    std::string roman = "";
    RomanPair pairs[] = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                          {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                          {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    int i = 0;
    while (num > 0) {
        if (num >= pairs[i].value) {
            num -= pairs[i].value;
            roman += pairs[i].symbol;
        } else {
            i++;
        }
    }
    return roman;
}

int mainTest() {
    std::cout << intToMiniRoman(1000) << std::endl;
    return 0;
}