#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

std::string miniRoman(int num);

std::string int_to_roman(int num) {
    if (num > 3999) {
        return "";
    }
    std::ostringstream oss;
    int thousands = num / 1000;
    for (int i = 0; i < thousands; i++) {
        oss << "M";
    }
    num %= 1000;
    int hundreds = num / 100;
    if (hundreds > 3) {
        oss << "CM" << miniRoman(num - 300);
    } else {
        for (int i = 0; i < hundreds; i++) {
            oss << "C";
        }
    }
    num %= 100;
    int tens = num / 10;
    if (tens == 9) {
        oss << "IX";
    } else if (tens > 5) {
        oss << "D" << miniRoman(num - 50);
    } else {
        for (int i = 0; i < tens; i++) {
            oss << "X";
        }
    }
    num %= 10;
    if (num == 9) {
        oss << "IX";
    } else if (num > 3) {
        oss << "IV" << miniRoman(num - 4);
    } else {
        for (int i = 0; i < num; i++) {
            oss << "I";
        }
    }
    return oss.str();
}

std::string miniRoman(int num) {
    if (num == 9)
        return "IX";
    if (num >= 4) {
        if (num % 4 > 0)
            return "IV" + std::string(num - 4, 'I');
        else
            return "IV";
    } else {
        return "I";
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The Roman numeral for " << num << " is " << int_to_roman(num) << std::endl;
    assert(int_to_roman(1000) == "M");
    return 0;
}