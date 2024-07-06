#include <string>

std::string intToMiniRoman(int number) {
    if (number < 1) {
        return "";
    }
    std::string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char symbols[] = {'M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'};
    int i = 0;
    while (number > 0) {
        if (number >= values[i]) {
            number -= values[i];
            roman += symbols[i];
        } else {
            i++;
        }
    }
    return roman;
}