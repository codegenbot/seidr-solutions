Here is the modified code:

```cpp
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
                          "", "CXLI", "CXLII", "CXLIII", "CXLIV", "CXLV", "CXLVI", "CXLVII", "CXLVIII", "CXlix", "CL",
                          "", "CLI", "CII", "CC", "CCI", "CCC", "CCCI", "CCCII", "CCCIII", "CCCIV", "CCCV", "CCCVI", "CCCvii", "CCcviii", "CCXC", 
                          "", "CM"};

    std::string roman_str = "";

    while (num > 0) {
        if (num >= 1000) {
            num -= 1000;
            roman_str += "M";
        } else if (num >= 900) {
            num -= 900;
            roman_str += "CM";
        } else if (num >= 500) {
            num -= 500;
            roman_str += "D";
        } else if (num >= 400) {
            num -= 400;
            roman_str += "CD";
        } else if (num >= 100) {
            for(int i = 0; i < (num / 100); ++i) {
                num -= 100;
                roman_str += "C";
            }
        } else if (num >= 90) {
            num -= 90;
            roman_str += "XC";
        } else if (num >= 50) {
            num -= 50;
            roman_str += "L";
        } else if (num >= 40) {
            num -= 40;
            roman_str += "XL";
        } else {
            for(int i = 0; ; ++i) {
                if ((i+1)*10 > num) break;
                roman_str += std::string(i, 'I');
                num -= (i+1)*10;
            }
        }
    }

    return roman_str;
}