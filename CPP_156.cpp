#include <string>
#include <iostream>
#include <cassert>
#include <vector>

std::string int_to_mini_roman(int number) {
    std::vector<std::string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string result = "";

    for (int i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            result += roman[i];
            number -= values[i];
        }
    }

    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}