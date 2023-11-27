#include <string>

string int_to_mini_roman(int number) {
    string romanNumeral;
    int num = number;

    while (num >= 1000) {
        romanNumeral += "m";
        num -= 1000;
    }

    while (num >= 900) {
        romanNumeral += "cm";
        num -= 900;
    }

    while (num >= 500) {
        romanNumeral += "d";
        num -= 500;
    }

    while (num >= 400) {
        romanNumeral += "cd";
        num -= 400;
    }

    while (num >= 100) {
        romanNumeral += "c";
        num -= 100;
    }

    while (num >= 90) {
        romanNumeral += "xc";
        num -= 90;
    }

    while (num >= 50) {
        romanNumeral += "l";
        num -= 50;
    }

    while (num >= 40) {
        romanNumeral += "xl";
        num -= 40;
    }

    while (num >= 10) {
        romanNumeral += "x";
        num -= 10;
    }

    while (num >= 9) {
        romanNumeral += "ix";
        num -= 9;
    }

    while (num >= 5) {
        romanNumeral += "v";
        num -= 5;
    }

    while (num >= 4) {
        romanNumeral += "iv";
        num -= 4;
    }

    while (num >= 1) {
        romanNumeral += "i";
        num -= 1;
    }

    return romanNumeral;
}