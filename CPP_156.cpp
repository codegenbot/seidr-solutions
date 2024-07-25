```cpp
#include <cassert>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string roman = "";
    const int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* romanSymbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 13; i++) {
        while (number >= value[i]) {
            number -= value[i];
            roman += romanSymbol[i];
        }
    }

    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}