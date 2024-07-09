#include <string>

std::string int_to_mini_roman(int number) {
    std::string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[]     = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    std::string result;

    for (int i = 0; i < 13; i++) {
        while (number >= values[i]) {
            number -= values[i];
            result += romans[i];
        }
    }

    return result;
}

int main() {
    std::string roman = int_to_mini_roman(1000);
    return 0;
}