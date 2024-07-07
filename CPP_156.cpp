```
#include <iostream>
#include <string>

std::string int_toMiniRoman(int num) {
    if (num <= 0) {
        return "Invalid input";
    }
    std::string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *syms[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (num > 0) {
        if (num >= values[i]) {
            num -= values[i];
            roman += syms[i];
        } else {
            i++;
        }
    }
    return roman;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The mini Roman numeral is: " << int_toMiniRoman(num) << "\n";
    return 0;
}