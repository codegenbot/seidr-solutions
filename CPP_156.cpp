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
        return "";
    }
    std::string roman;
    if (num >= 1000) {
        for (int i = 0; i < num / 1000; i++) {
            roman += "M";
        }
        num %= 1000;
    }
    if (num >= 900) {
        roman += "CM";
        num -= 900;
    } else if (num >= 500) {
        for (int i = 0; i < num / 500; i++) {
            roman += "D";
        }
        num %= 500;
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
    } else if (num >= 9) {
        roman += "IX";
        num -= 9;
    } else if (num >= 5) {
        for (int i = 0; i < num / 5; i++) {
            roman += "V";
        }
        num %= 5;
    } else if (num >= 4) {
        roman += "IV";
        num -= 4;
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
    assert(int_to_roman(1000) == "M");
    return 0;
}