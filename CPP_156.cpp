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
                          "", "CXLI", "CXLII", "CXLIII", "CXLIV", "CXLV", "CXLVI", "CXLVII", "CXLVIII", "CXLIX", "CV"};
    std::string result = "";
    
    if (num >= 1000) {
        int count = num / 1000;
        for(int i=0; i <count; i++){
            result += "M";
        }
        num %= 1000;
    }
    
    if (num >= 900) {
        result += "CM" + int_to_mini_roman(num - 900).substr(1);
        return result;
    } else if (num >= 500) {
        result += "D" + int_to_mini_roman(num - 500).substr(1);
        return result;
    } else if (num >= 400) {
        result += "CD" + int_to_mini_roman(num - 400).substr(1);
        return result;
    }
    
    while (num > 0) {
        if (num >= 100) {
            result += roman[13];
            num -= 100;
        } else if (num >= 90) {
            result += "XC";
            num -= 90;
        } else if (num >= 50) {
            result += roman[49];
            num -= 50;
        } else if (num >= 40) {
            result += "XL";
            num -= 40;
        } else if (num >= 10) {
            for(int i=0; i <(num / 10); i++){
                result += roman[9];
            }
            num %= 10;
        } else if (num >= 9) {
            result += "IX";
            num -= 9;
        } else if (num >= 5) {
            for(int i=0; i <(num / 5); i++){
                result += roman[4];
            }
            num %= 5;
        } else if (num >= 4) {
            result += "IV";
            num -= 4;
        } else {
            for(int i=0; i <num; i++){
                result += roman[1];
            }
        }
    }
    
    return result;
}