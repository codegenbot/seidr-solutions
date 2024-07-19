#include <cassert>
#include <iostream>
#include <string>

std::string int_to_mini_roman(int num) {
    if (num < 1 || num > 3999) {
        return "Invalid input";
    }

    std::string roman;
    const std::string romanNums[] = {
        "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"
    };
    const int romanVals[] = {
        1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000
    };

    int i = 12;

    while (num > 0) {
        int div = num / romanVals[i];
        num %= romanVals[i];
        while (div--) roman += romanNums[i];
        i--;
    }

    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}