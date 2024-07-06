#include <string>

std::string int_to_mini_roman(int number) {
    string roman = "";
    if (number >= 1000) {
        for (int i = 0; i < number / 1000; i++) {
            roman += "M";
        }
        number %= 1000;
    }
    if (number >= 900) {
        roman += "CM";
        number -= 900;
    } else if (number >= 500) {
        for (int i = 0; i < number / 500; i++) {
            roman += "D";
        }
        number %= 500;
    } else if (number >= 400) {
        roman += "CD";
        number -= 400;
    } else if (number >= 100) {
        for (int i = 0; i < number / 100; i++) {
            roman += "C";
        }
        number %= 100;
    } else if (number >= 90) {
        roman += "XC";
        number -= 90;
    } else if (number >= 50) {
        for (int i = 0; i < number / 50; i++) {
            roman += "L";
        }
        number %= 50;
    } else if (number >= 40) {
        roman += "XL";
        number -= 40;
    } else if (number >= 10) {
        for (int i = 0; i < number / 10; i++) {
            roman += "X";
        }
        number %= 10;
    } else if (number >= 9) {
        roman += "IX";
        number -= 9;
    } else if (number >= 5) {
        for (int i = 0; i < number / 5; i++) {
            roman += "V";
        }
        number %= 5;
    } else if (number >= 4) {
        roman += "IV";
        number -= 4;
    } else {
        roman += (char)(number + '0');
    }
    return roman;
}