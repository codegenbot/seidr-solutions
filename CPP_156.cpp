#include <string>

std::string int_to_mini_roman(int number) {
    if (number >= 4000) {
        throw std::runtime_error("Number is too big");
    }
    std::string result = "";
    int thousands = number / 1000;
    for (int i = 0; i < thousands; i++) {
        result += "M";
    }
    number %= 1000;
    int hundreds = number / 100;
    if (hundreds > 3) {
        result += "CM";
        number -= 400;
    } else {
        for (int i = 0; i < hundreds; i++) {
            result += "C";
        }
    }
    number %= 100;
    int tens = number / 10;
    if (tens == 9) {
        result += "XC";
        number -= 90;
    } else if (tens > 3) {
        result += "L";
        number -= 50;
        for (int i = 0; i < tens - 4; i++) {
            result += "X";
        }
    } else {
        for (int i = 0; i < tens; i++) {
            result += "X";
        }
    }
    number %= 10;
    int ones = number;
    if (ones == 9) {
        result += "IX";
        number -= 9;
    } else if (ones > 3) {
        result += "V";
        number -= 5;
        for (int i = 0; i < ones - 4; i++) {
            result += "I";
        }
    } else {
        for (int i = 0; i < ones; i++) {
            result += "I";
        }
    }
    return result;
}