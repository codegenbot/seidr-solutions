#include <string>

std::string int_to_mini_roman(int number) {
    if (number < 1 || number > 3999)
        return "Input value out of range";

    std::string roman;

    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *roman_chars[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < sizeof(values) / sizeof(int); i++) {
        while (number >= values[i]) {
            roman += roman_chars[i];
            number -= values[i];
        }
    }

    return roman;
}