```cpp
#include <string>

std::string roman(int num) {
    string result = "";

    while (num > 0) {
        if (num >= 1000) {
            num -= 1000;
            result += "M";
        } else if (num >= 900) {
            num -= 900;
            result += "CM";
        } else if (num >= 500) {
            num -= 500;
            result += "D";
        } else if (num >= 400) {
            num -= 400;
            result += "CD";
        } else if (num >= 100) {
            int count = num / 100;
            for (int i = 0; i < count; i++) {
                result += "C";
            }
            num %= 100;
        } else if (num >= 90) {
            num -= 90;
            result += "XC";
        } else if (num >= 50) {
            num -= 50;
            result += "L";
        } else if (num >= 40) {
            num -= 40;
            result += "XL";
        } else if (num >= 10) {
            int count = num / 10;
            for (int i = 0; i < count; i++) {
                result += "X";
            }
            num %= 10;
        } else if (num >= 9) {
            num -= 9;
            result += "IX";
        } else if (num >= 5) {
            int count = num / 5;
            for (int i = 0; i < count; i++) {
                result += "V";
            }
            num %= 5;
        } else if (num >= 4) {
            num -= 4;
            result += "IV";
        } else {
            num--;
            result += "I";
        }
    }

    return result;
}