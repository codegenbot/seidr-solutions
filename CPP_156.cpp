#include <string>
using namespace std;
string int_to_mini_roman(int number) {
    if (number >= 4000) return "MMMMMM"; // for numbers greater than 3999
    if (number >= 1000) {
        string roman = "M";
        number -= 1000;
        return roman + int_to_mini_roman(number);
    }
    if (number >= 900) return "CM" + int_to_mini_roman(number - 900);
    if (number >= 500) {
        string roman = "D";
        number -= 500;
        return roman + int_to_mini_roman(number);
    }
    if (number >= 400) return "CD" + int_to_mini_roman(number - 400);
    if (number >= 100) {
        string roman = "";
        for (int i = 0; i < number / 100; i++) {
            roman += "C";
        }
        number %= 100;
        return roman + int_to_mini_roman(number);
    }
    if (number >= 90) return "XC" + int_to_mini_roman(number - 90);
    if (number >= 50) {
        string roman = "";
        for (int i = 0; i < number / 50; i++) {
            roman += "L";
        }
        number %= 50;
        return roman + int_to_mini_roman(number);
    }
    if (number >= 40) return "XL" + int_to_mini_roman(number - 40);
    if (number >= 10) {
        string roman = "";
        for (int i = 0; i < number / 10; i++) {
            roman += "X";
        }
        number %= 10;
        return roman + int_to_mini_roman(number);
    }
    if (number >= 9) return "IX" + int_to_mini_roman(number - 9);
    if (number >= 5) {
        string roman = "";
        for (int i = 0; i < number / 5; i++) {
            roman += "V";
        }
        number %= 5;
        return roman + int_to_mini_roman(number);
    }
    if (number >= 4) return "IV" + int_to_mini_roman(number - 4);
    if (number >= 1) {
        string roman = "";
        for (int i = 0; i < number; i++) {
            roman += "I";
        }
        return roman;
    } else return "0";
}