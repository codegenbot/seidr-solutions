#include <cassert>
#include <string>

std::string int_to_mini_roman(int num) {
    std::string result = "";
    std::string roman_numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for (int i = 0; i < 13; ++i) {
        while (num >= values[i]) {
            result += roman_numerals[i];
            num -= values[i];
        }
    }

    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}