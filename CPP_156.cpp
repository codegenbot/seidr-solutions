```cpp
#include <string>
#include <iostream>

std::string miniRoman(int num) {
    if (num == 9)
        return "IX";
    if (num >= 4) {
        if (num % 4 > 0)
            return "IV" + std::string(num - 4, 'I');
        else
            return "IV";
    } else {
        return std::string(num, 'I');
    }
}

std::string int_to_roman(int num) {
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
        roman += "CM" + miniRoman(num - 300);
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
        roman += "D" + miniRoman(num - 50);
    } else {
        for (int i = 0; i < tens; i++) {
            roman += "X";
        }
    }
    num %= 10;
    if (num == 9) {
        roman += "IX";
    } else if (num > 3) {
        roman += "IV" + miniRoman(num - 4);
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
    std::cout << "The Roman numeral for " << num << " is " << int_to_roman(num) << std::endl;
    return 0;
}