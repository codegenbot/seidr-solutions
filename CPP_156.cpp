#include <cassert>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_mini_romank(int n) {
    for (int i = 0; i < 13; ++i) {
        if (n >= roman[i][0] - '0' * (roman[i][0] <= 'M')) {
            return strlen(roman[i]);
        }
    }
}

int main() {
    assert(int_to_mini_romank(1000) == 3);
    return 0;
}