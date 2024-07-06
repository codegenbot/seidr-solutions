```cpp
#include <cassert>
#include <string>

std::string int_toRoman(int num) {
    const std::string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    std::string romanNumeral;

    for (int i = 0; i < sizeof(decimal) / sizeof(decimal[0]); i++) {
        while (num >= decimal[i]) {
            num -= decimal[i];
            romanNumeral += roman[i];
        }
    }

    return romanNumeral;
}

int mainTest() {
    assert(int_toRoman(1000) == "M");
    return 0;
}