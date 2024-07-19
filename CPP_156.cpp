```cpp
#include <iostream>
#include <string>

std::string int_to_mini_roman(int n) {
    if (n <= 0)
        return "";
    std::string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (n > 0) {
        if (n >= values[i]) {
            n -= values[i];
            roman += symbols[i];
        } else {
            i++;
        }
    }
    return roman;
}

int mainTest() {
    std::cout << int_to_mini_roman(1000) << std::endl;
    return 0;
}