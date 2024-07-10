#include <string>
#include <iostream>

std::string int_to_mini_roman(int num) {
    if (num > 3999) {
        return "Out of range";
    }
    std::string roman;
    int thousands = num / 1000;
    for (int i = 0; i < thousands; i++) {
        roman += "M";
    }
    num %= 1000;
    int hundreds = num / 100;
    if (hundreds > 3) {
        roman += "CM" + mini_roman(num - 300);
    } else {
        for (int i = 0; i < hundreds; i++) {
            roman += "C";
        }
    }
    num %= 100;
    int tens = num / 10;
    if (tens == 9) {
        roman += "IX";
    } else if (tens > 5) {
        roman += "D" + mini_roman(num - 50);
    } else {
        for (int i = 0; i < tens; i++) {
            roman += "X";
        }
    }
    num %= 10;
    if (num == 9) {
        roman += "IX";
    } else if (num > 3) {
        roman += "IV" + mini_roman(num - 4);
    } else {
        for (int i = 0; i < num; i++) {
            roman += "I";
        }
    }
    return roman;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The Roman numeral for " << num << " is " << int_to_mini_roman(num) << std::endl;
    return 0;
}