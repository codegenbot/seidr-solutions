#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

std::string int_to_mini_roman(int number) {
    std::string result;
    for (int i = 0; i < 13; i++) {
        while (number >= val[i]) {
            number -= val[i];
            result += roman[i];
        }
    }
    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    assert(int_to_mini_roman(1999) == "1999");
    assert(int_to_mini_roman(2024) == "MMXXIV");
    return 0;
}