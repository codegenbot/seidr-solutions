#include <cassert>
#include <string>

std::string romanToInt(std::int32_t num) {
    if (num <= 0)
        return "Invalid input";

    std::string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
        while (num >= values[i]) {
            num -= values[i];
            roman += symbols[i];
        }
    }

    return roman;
}