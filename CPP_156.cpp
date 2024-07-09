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
                      "", "CLI", "CII", "CC", "CCI", "CCC", "CCCI", "CCCII", "CCCIII", "CCCIV", "CCCV", "CCCVI", "CCCvii", "CCcviii", "CCIX", "CCX"};

    if (num < 1 || num > 1000) {
        return "";
    }

    string result = "";

    while (num >= 1000) {
        num -= 1000;
        result += "M";
    }

    for (int i = 900; i <= 999; i++) {
        if (i == num) {
            result += roman[i];
            return result;
        }
    }

    for (int i = 500; i <= 899; i++) {
        while (num >= i) {
            num -= i;
            result += "D";
        }
    }

    for (int i = 400; i <= 499; i++) {
        if (i == num) {
            result += roman[i];
            return result;
        }
    }

    for (int i = 100; i <= 399; i++) {
        while (num >= i) {
            num -= i;
            result += "C";
        }
    }

    for (int i = 90; i <= 99; i++) {
        if (i == num) {
            result += roman[i];
            return result;
        }
    }

    for (int i = 50; i <= 89; i++) {
        while (num >= i) {
            num -= i;
            result += "L";
        }
    }

    for (int i = 40; i <= 49; i++) {
        if (i == num) {
            result += roman[i];
            return result;
        }
    }

    for (int i = 10; i <= 39; i++) {
        while (num >= i) {
            num -= i;
            result += "X";
        }
    }

    for (int i = 9; i <= 9; i++) {
        if (i == num) {
            result += roman[i];
            return result;
        }
    }

    for (int i = 5; i <= 8; i++) {
        while (num >= i * 10) {
            num -= i * 10;
            result += "V";
        }
    }

    for (int i = 4; i <= 4; i++) {
        if (i == num) {
            result += roman[i];
            return result;
        }
    }

    while (num > 0) {
        if (num >= 3) {
            num -= 3;
            result += "I";
        } else if (num == 2) {
            result += "II";
            return result;
        } else {
            num--;
            result += "I";
        }
    }

    return result;
}