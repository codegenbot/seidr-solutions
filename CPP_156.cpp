#include <string>

string int_to_mini_roman(int num) {
    string roman = "";
    if (num >= 1000) {
        while (num >= 1000) {
            roman += "M";
            num -= 1000;
        }
    }
    if (num >= 900) {
        while (num >= 900) {
            roman += "CM";
            num -= 900;
        }
    }
    if (num >= 500) {
        while (num >= 500) {
            roman += "D";
            num -= 500;
        }
    }
    if (num >= 400) {
        while (num >= 400) {
            roman += "CD";
            num -= 400;
        }
    }
    if (num >= 100) {
        while (num >= 100) {
            roman += "C";
            num -= 100;
        }
    }
    if (num >= 90) {
        while (num >= 90) {
            roman += "XC";
            num -= 90;
        }
    }
    if (num >= 50) {
        while (num >= 50) {
            roman += "L";
            num -= 50;
        }
    }
    if (num >= 40) {
        while (num >= 40) {
            roman += "XL";
            num -= 40;
        }
    }
    if (num >= 10) {
        while (num >= 10) {
            roman += "X";
            num -= 10;
        }
    }
    if (num >= 9) {
        while (num >= 9) {
            roman += "IX";
            num -= 9;
        }
    }
    if (num >= 5) {
        while (num >= 5) {
            roman += "V";
            num -= 5;
        }
    }
    if (num >= 4) {
        while (num >= 4) {
            roman += "IV";
            num -= 4;
        }
    }
    if (num > 0) {
        roman += "I";
        num -= 1;
    }
    return roman;
}