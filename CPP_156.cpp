#include <iostream>
#include <string>

struct RomanPair {
    int value;
    char symbol;
};

std::string intToMiniRoman(int num) {
    std::string roman = "";
    RomanPair pairs[] = {{1000, 'M'}, {900, '\x43'}, {500, 'D'}, {400, '\x43'},{100, 'C'}, {90, '\x58'}, {50, 'L'}, {40, '\x58'},
                          {10, '\x58'}, {9, '\x49'}, {5, 'V'}, {4, '\x49'}, {1, 'I'}};
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