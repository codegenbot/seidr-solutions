```cpp
#include <cassert>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string roman = "";
    if (number >= 1000) {
        int thousands = number / 1000;
        for (int i = 0; i < thousands; i++) {
            roman += "M";
        }
        number %= 1000;
    }
    if (number >= 900) {
        int nine_hundreds = number / 900;
        for (int i = 0; i < nine_hundreds; i++) {
            roman += "CM";
        }
        number %= 900;
    }
    if (number >= 500) {
        int five_hundreds = number / 500;
        for (int i = 0; i < five_hundreds; i++) {
            roman += "D";
        }
        number %= 500;
    }
    if (number >= 400) {
        int four_hundreds = number / 400;
        for (int i = 0; i < four_hundreds; i++) {
            roman += "CD";
        }
        number %= 400;
    }
    if (number >= 100) {
        int hundreds = number / 100;
        for (int i = 0; i < hundreds; i++) {
            roman += "C";
        }
        number %= 100;
    }
    if (number >= 90) {
        int ninety = number / 90;
        for (int i = 0; i < ninety; i++) {
            roman += "XC";
        }
        number %= 90;
    }
    if (number >= 50) {
        int fifty = number / 50;
        for (int i = 0; i < fifty; i++) {
            roman += "L";
        }
        number %= 50;
    }
    if (number >= 40) {
        int forty = number / 40;
        for (int i = 0; i < forty; i++) {
            roman += "XL";
        }
        number %= 40;
    }
    if (number >= 10) {
        int tens = number / 10;
        for (int i = 0; i < tens; i++) {
            roman += "X";
        }
        number %= 10;
    }
    if (number >= 9) {
        int nine = number / 9;
        for (int i = 0; i < nine; i++) {
            roman += "IX";
        }
        number %= 9;
    }
    if (number >= 5) {
        int five = number / 5;
        for (int i = 0; i < five; i++) {
            roman += "V";
        }
        number %= 5;
    }
    if (number >= 4) {
        int four = number / 4;
        for (int i = 0; i < four; i++) {
            roman += "IV";
        }
        number %= 4;
    }
    for (int i = 0; i < number; i++) {
        roman += "I";
    }
    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}