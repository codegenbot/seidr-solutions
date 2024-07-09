std::string intToMiniRoman(int num) {
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
                          "", "CXLI", "CXLII", "CXLIII", "CXLIV", "CXLV", "CXLVI", "CXLVII", "CXLVIII", "CXLIX", "CV",
                          "", "LIl", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX", "LX"};

    if (num < 1 || num > 3999) {
        return "";
    }

    std::string result;
    do {
        int remainder = num % 10;
        switch (remainder) {
            case 0:
                break;

            case 3:
                result = roman[9] + result;
                num /= 10;
                break;

            case 4:
                result = roman[12] + result;
                num -= 4;
                break;

            default: {
                if (remainder > 3) {
                    int threeTimes = remainder / 3;
                    for (int i = 0; i < threeTimes; i++) {
                        result = roman[9] + result;
                    }
                    remainder %= 3;
                }

                if (remainder == 1) {
                    result = roman[8] + result;
                } else if (remainder > 3) {
                    for (int i = 0; i < threeTimes; i++) {
                        result = roman[5] + result;
                    }
                    remainder %= 3;

                    if (remainder == 1) {
                        result = roman[8] + result;
                    } else if (remainder > 0) {
                        for (int i = 0; i < remainder; i++) {
                            result = roman[1] + result;
                        }
                    }
                } else {
                    switch (remainder) {
                        case 1:
                            result = roman[5] + result;
                            break;

                        case 2:
                            result = roman[6] + result;
                            break;

                        default:
                            for (int i = 0; i < remainder; i++) {
                                result = roman[1] + result;
                            }
                    }
                }

                num /= 10;
            }
        }
    } while (num > 3999);

    return result;
}