#include <string>
std::string int_to_mini_roman(int num) {
    string result = "";
    while (num > 0) {
        if (num >= 1000) {
            result += "M";
            num -= 1000;
        } else if (num >= 900) {
            result += "CM";
            num -= 900;
        } else if (num >= 500) {
            result += "D";
            num -= 500;
        } else if (num >= 400) {
            result += "CD";
            num -= 400;
        } else if (num >= 100) {
            if (num == 100) {
                result += "C";
                break;
            }
            for (int i = 0; i < num / 100; i++) {
                result += "C";
            }
            num %= 100;
        } else if (num >= 90) {
            result += "XC";
            num -= 90;
        } else if (num >= 50) {
            if (num == 50) {
                result += "L";
                break;
            }
            for (int i = 0; i < num / 50; i++) {
                result += "L";
            }
            num %= 50;
        } else if (num >= 40) {
            result += "XL";
            num -= 40;
        } else if (num >= 10) {
            for (int i = 0; i < num / 10; i++) {
                result += "X";
            }
            num %= 10;
        } else if (num >= 9) {
            result += "IX";
            num -= 9;
        } else if (num >= 5) {
            for (int i = 0; i < num / 5; i++) {
                result += "V";
            }
            num %= 5;
        } else if (num >= 4) {
            result += "IV";
            num -= 4;
        } else {
            for (int i = 0; i < num; i++) {
                result += "I";
            }
        }
    }
    return result;
}