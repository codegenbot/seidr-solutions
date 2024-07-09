#include <string>
std::string int_to_mini_roman(int num) {
    std::string roman = "";
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
    } else if (num >= 100) {
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
    } else if (num >= 10) {
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