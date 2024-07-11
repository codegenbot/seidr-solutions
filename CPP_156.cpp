#include <string>

std::string int_to_mini_roman(int number) {
    if (number >= 4000) {
        return "";
    }
    std::string roman = "";
    int thousand = number / 1000;
    for (int i = 0; i < thousand; i++) {
        roman += "M";
    }
    number %= 1000;
    int fourHundred = number / 400;
    for (int i = 0; i < fourHundred; i++) {
        roman += "CD";
    }
    number %= 400;
    int hundred = number / 100;
    for (int i = 0; i < hundred; i++) {
        roman += "C";
    }
    number %= 100;
    int fifty = number / 50;
    for (int i = 0; i < fifty; i++) {
        roman += "L";
    }
    number %= 50;
    int ten = number / 10;
    if (ten == 4) {
        for (int i = 0; i < 1; i++) {
            roman += "IV";
        }
    } else {
        for (int i = 0; i < ten; i++) {
            roman += "X";
        }
    }
    number %= 10;
    int one = number / 1;
    if (one == 4) {
        for (int i = 0; i < 1; i++) {
            roman += "IV";
        }
    } else {
        for (int i = 0; i < one; i++) {
            roman += "I";
        }
    }
    return roman;
}