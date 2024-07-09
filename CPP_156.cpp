#include <iostream>
using namespace std;

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
                      "", "CXLI", "CXLII", "CXLIII", "CXLIV", "CXLV", "CXLVI", "CXLVII", "CXLVIII", "Clix", "CL",
                      "", "CLI", "CII", "CC", "CCI", "CCC", "CCCI", "CCCII", "CCCIII", "CCCIV", "CCCV", "CCCVI", "CCCvii", "CCcviii", "CCXC", 
                      "", "CM"};

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
        } else {
            if(num >= 100) {
                for(int i = 0; ; i++) {
                    if((i * 100) > num) break;
                    num -= i * 100;
                    for(int j = 0; j < i; ++j) result += "C";
                    for(int k = 0; k < i; ++k) result += "X";
                }
            } else if(num >= 90) {
                num -= 90;
                result += "XC";
            } else if (num >= 50) {
                num -= 50;
                result += "L";
            } else if (num >= 40) {
                num -= 40;
                result += "XL";
            } else {
                while(num > 0) {
                    if(num >= 10) {
                        for(int i = 0; ; i++) {
                            if((i * 10) > num) break;
                            num -= i * 10;
                            for(int j = 0; j < i; ++j) result += "X";
                        }
                    } else if(num >= 9) {
                        num -= 9;
                        result += "IX";
                    } else if (num >= 5) {
                        num -= 5;
                        result += "V";
                    } else if (num == 4) {
                        result += "IV";
                        return result;
                    } else {
                        num--;
                        result += "I";
                    }
                }
            }
        }
    }

    return result;
}