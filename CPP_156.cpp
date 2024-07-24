#include <vector>
#include <string>

std::vector<std::string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

std::string intToMiniRoman(int number) {
    std::string result;
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        while (number >= values[i]) {
            number -= values[i];
            result += romanNumerals[i];
        }
    }
    return result;
}