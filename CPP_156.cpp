#include <cassert>
#include <string>

std::string int_to_mini_roman(int num) {
    // Map of mini roman numerals and their values
    std::string mini_roman[] = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    int values[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

    // Iterate through the values in reverse order and construct the mini roman numeral
    std::string result = "";
    for (int i = 12; i >= 0; i--) {
        while (num >= values[i]) {
            result += mini_roman[i];
            num -= values[i];
        }
    }
    return result;
}