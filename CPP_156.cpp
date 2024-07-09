#include <string>

string int_to_mini_roman(int num) {
    string roman[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
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
                      "", "CXLI", "CXLII", "CXLIII", "CXLIV", "CXLV", "CXLVI", "CXLVII", "CXLVIII", "CXlix", "CL",
                      "", "CLI", "CII", "CC", "CCI", "CCC", "CCCI", "CCCII", "CCCIII", "CCCIV", "CCCV", "CCCVI", "CCCvii", "CCcviii", "CCXCIX", "CCCC"};

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
            int count = num / 50;
            for (int i = 0; i < count; i++) {
                result += "L";
            }
            num %= 50;
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