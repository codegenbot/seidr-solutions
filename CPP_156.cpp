#include <cassert>
#include <string>

std::string int_to_mini_roman(int num) {
    std::string roman;
    const std::string romanNumeral[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for (int i = 0; i < 13; ++i) {
        while (num >= values[i]) {
            roman += romanNumeral[i];
            num -= values[i];
        }
    }

    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}