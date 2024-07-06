#include <string>

std::string intToMiniRoman(int number) {
    std::string miniRoman = "";
    
    while (number > 0) {
        if (number >= 1000) {
            for (int i = 0; i < 3; i++) {
                miniRoman += "M";
                number -= 1000;
            }
        } else if (number >= 900) {
            miniRoman += "CM";
            number -= 900;
        } else if (number >= 500) {
            for (int i = 0; i < 2; i++) {
                miniRoman += "D";
                number -= 500;
            }
        } else if (number >= 400) {
            miniRoman += "CD";
            number -= 400;
        } else if (number >= 100) {
            for (int i = 0; i < number / 100; i++) {
                miniRoman += "C";
                number -= 100;
            }
        } else if (number >= 90) {
            miniRoman += "XC";
            number -= 90;
        } else if (number >= 50) {
            for (int i = 0; i < number / 50; i++) {
                miniRoman += "L";
                number -= 50;
            }
        } else if (number >= 40) {
            miniRoman += "XL";
            number -= 40;
        } else if (number >= 10) {
            for (int i = 0; i < number / 10; i++) {
                miniRoman += "X";
                number -= 10;
            }
        } else if (number >= 9) {
            miniRoman += "IX";
            number -= 9;
        } else if (number >= 5) {
            for (int i = 0; i < number / 5; i++) {
                miniRoman += "V";
                number -= 5;
            }
        } else if (number >= 4) {
            miniRoman += "IV";
            number -= 4;
        } else {
            miniRoman += "I";
            number -= 1;
        }
    }
    
    return miniRoman;
}