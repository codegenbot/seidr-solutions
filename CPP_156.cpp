```cpp
#include <string>
#include <iostream>

const char* miniRoman(int num) {
    if (num == 9)
        return "IX";
    if (num >= 4) {
        if (num % 4 > 0)
            return "IV" + std::to_string(num - 4) + "I";
        else
            return "IV";
    } else {
        return std::string(num, 'I').c_str();
    }
}

const char* int_to_roman(int num) {
    if (num > 3999) {
        return "Out of range";
    }
    const char* roman = ""; // Initialize as an empty string
    int thousands = num / 1000;
    for (int i = 0; i < thousands; i++) {
        roman += "M";
    }
    num %= 1000;
    int hundreds = num / 100;
    if (hundreds > 3) {
        roman += "CM" + std::string(miniRoman(num - 300)).c_str();
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
        roman += "D" + std::string(miniRoman(num - 50)).c_str();
    } else {
        for (int i = 0; i < tens; i++) {
            roman += "X";
        }
    }
    num %= 10;
    if (num == 9) {
        roman += "IX";
    } else if (num > 3) {
        roman += "IV" + std::string(miniRoman(num - 4)).c_str();
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