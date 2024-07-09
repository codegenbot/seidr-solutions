```
string miniRomanToInteger(string roman) {
    int num = 0;
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
                      "", "CLI", "CII", "CC", "CCI", "CCC", "CCCI", "CCCII", "CCCIII", "CCCIV", "CCCV", "CCCVI", "CCCvii", "CCCIX", "CCCX"};

    for (int i = 0; i < sizeof(roman) / sizeof(string); i++) {
        if (roman[i].length() > 1 && roman[i].substr(0, 2) == roman[i]) {
            while (num >= roman_to_int(roman[i])) {
                num -= roman_to_int(roman[i]);
                result += roman[i];
            }
        } else {
            while (num >= roman_to_int(roman[i])) {
                num -= roman_to_int(roman[i]);
                result += roman[i];
            }
        }
    }

    return result;
}

int roman_to_int(string roman) {
    int num = 0;
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
                      "", "CLI", "CII", "CC", "CCI", "CCC", "CCCI", "CCCII", "CCCIII", "CCCIV", "CCCV", "CCCVI", "CCCvii", "CCCIX", "CCCX"};

    if (roman.length() == 1) {
        for (int i = 0; i < sizeof(roman) / sizeof(string); i++) {
            if (roman[i].length() > 0 && roman[i] == roman[0]) {
                return roman_to_int_roman(i);
            }
        }
    } else if (roman.length() > 1 && roman.substr(0, 2) == "IV") {
        return 4;
    } else if (roman.length() > 1 && roman.substr(0, 2) == "IX") {
        return 9;
    } else if (roman.length() > 1 && roman.substr(0, 2) == "XL") {
        return 40;
    } else if (roman.length() > 1 && roman.substr(0, 2) == "XC") {
        return 90;
    } else if (roman.length() > 1 && roman.substr(0, 3) == "CD") {
        return 400;
    } else if (roman.length() > 1 && roman.substr(0, 3) == "CM") {
        return 900;
    }

    for (int i = 0; i < sizeof(roman) / sizeof(string); i++) {
        if (roman[i].length() > 1 && roman[i] == roman[0]) {
            while (num >= roman_to_int_roman(i)) {
                num -= roman_to_int_roman(i);
                result += roman[i];
            }
        } else {
            for (int j = 0; j < sizeof(roman) / sizeof(string); j++) {
                if (roman[j].length() > 1 && roman[j] == roman[0]) {
                    while (num >= roman_to_int_roman(j)) {
                        num -= roman_to_int_roman(j);
                        result += roman[j];
                    }
                } else if (roman[j].length() == 1) {
                    for (int k = 0; k < sizeof(roman) / sizeof(string); k++) {
                        if (roman[k].length() > 0 && roman[k] == roman[j]) {
                            while (num >= roman_to_int_roman(k)) {
                                num -= roman_to_int_roman(k);
                                result += roman[k];
                            }
                        }