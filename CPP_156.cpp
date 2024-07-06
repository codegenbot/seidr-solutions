```cpp
#include <cassert>

string intToRoman(int num) {
    string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanLiterals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        while (num >= values[i]) {
            roman += romanLiterals[i];
            num -= values[i];
        }
    }

    return roman;
}

int mainTest() {
    assert(intToRoman(1000) == "M");
    return 0;
}