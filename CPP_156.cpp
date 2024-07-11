#include <string>

std::string int_to_mini_roman(int number) {
    if (number <= 0) {
        return "Invalid input";
    }

    std::string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
        while (number >= values[i]) {
            number -= values[i];
            roman += romans[i];
        }
    }

    return roman;
}