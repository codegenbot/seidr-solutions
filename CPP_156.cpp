#include <vector>
#include <string>

std::vector<std::string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

std::string int_to_roman(int number) {
    std::string result;
    for (int i = 0; i < 13; i++) {
        while (number >= val[i]) {
            number -= val[i];
            result += roman[i];
        }
    }
    return result;
}