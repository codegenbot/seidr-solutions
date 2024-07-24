```c++
#include <vector>
#include <string>
#include <cassert>
#include <initializer_list>

std::vector<std::string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

std::string int_to_roman(int number) {
    std::string result;
    for (auto i : {13}) {
        while (number >= val[i-1]) {
            number -= val[i-1];
            result += roman[i-1];
        }
    }
    return result;
}

int main() {
    assert(int_to_roman(1000) == "M");
    assert(int_to_roman(1999) == "MCMXCIX");
    assert(int_to_roman(2024) == "MMXXIV");
    return 0;
}