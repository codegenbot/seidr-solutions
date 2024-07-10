```cpp
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

std::string mini_roman(int num) {
    if (num < 1) return "";
    std::string roman;
    if (num >= 1000) {
        roman += "M";
        num -= 1000;
    } else if (num >= 900) {
        roman += "CM";
        num -= 900;
    } else if (num >= 500) {
        roman += "D";
        num -= 500;
    } else if (num >= 400) {
        roman += "CD";
        num -= 400;
    }

    if (num >= 100) {
        for (int i = 0; i < num / 100; i++) {
            roman += "C";
        }
        num %= 100;
    } else if (num >= 90) {
        roman += "XC";
        num -= 90;
    } else if (num >= 50) {
        for (int i = 0; i < num / 50; i++) {
            roman += "L";
        }
        num %= 50;
    } else if (num >= 40) {
        roman += "XL";
        num -= 40;
    }

    if (num >= 10) {
        for (int i = 0; i < num / 10; i++) {
            roman += "X";
        }
        num %= 10;
    } else if (num == 9) {
        roman += "IX";
    } else if (num >= 5) {
        roman += "V";
        num -= 5;
    } else if (num >= 4) {
        roman += "IV";
        num -= 4;
    }

    for (int i = 0; i < num; i++) {
        roman += "I";
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