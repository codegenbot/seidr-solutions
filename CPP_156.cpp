```cpp
#include <string>

std::string int_to_mini_roman(int num) {
    std::string roman[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
                      "", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX",
                      "", "XXI", "XXII", "XXIII", "XXIV", "XXV", "XXVI", "XXVII", "XXVIII", "XXIX", "XXX",
                      "", "XXXI", "XXXII", "XXXIII", "XXXIV", "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX", "XL",
                      "", "L", "LI", "LII", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX", "LX",
                      "", "LXI", "LXII", "LXIII", "LXIV", "LXV", "LXVI", "LXVII", "LXVIII", "LXIX", "LXX",
                      "", "LXXI", "LXXII", "LXXIII", "LXXIV", "LXXV", "LXXVI", "LXXVII", "LXXVIII", "LXXIX", "LXXX",
                      "", "LXXXI", "LXXXII", "LXXXIII", "LXXXIV", "LXXXV", "LXXXVI", "LXXXVII", "LXXXVIII", "LXXXIX", "XC",
                      "", "C", "CI", "CII", "CIII", "CIV", "CV", "CVI", "CVII", "CVIII", "CX", "CXI", "CXII", "CXIII", "CXIV", "CXV", "CXVI", "CXVII", "CXVIII", "CXIX", "CXX",
                      "", "CXXI", "CXXII", "CXXIII", "CXXIV", "CXXV", "CXXVI", "CXXVII", "CXXVIII", "CXXIX", "CXXX",
                      "", "CXXXI", "CXXXII", "CXXXIII", "CXXXIV", "CXXXV", "CXXXVI", "CXXXVII", "CXXXVIII", "CXXXIX", "CXL",
                      "", "CXLI", "CXLII", "CXLIII", "CXLIV", "CXLV", "CXLVI", "CXLVII", "CXLVIII", "CXLIX", "CXlix",
                      "", "M", "MI", "MII", "MIII", "MIV", "MV", "MXI", "MXII", "MXIII", "MXIV"};

    std::string result = "";

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
            int hundreds = num / 100;
            for (int i = 0; i < hundreds; i++) {
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
            int ones = num / 10;
            for (int i = 0; i < ones; i++) {
                result += "X";
            }
            num %= 10;
        } else if (num >= 9) {
            num -= 9;
            result += "IX";
        } else if (num >= 5) {
            num -= 5;
            result += "V";
        } else if (num >= 4) {
            num -= 4;
            result += "IV";
        } else {
            for (int i = 0; i < num; i++) {
                result += "I";
            }
            num = 0;
        }
    }

    return result;
}