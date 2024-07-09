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
        } else {
            if (num >= 100) {
                int count = num / 100;
                for(int i=0; i <count ; i++) {
                    result += "C";
                }
                num -= 100 * count;
            }

            if (num >= 90) {
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
                        int count = num / 10;
                        for(int i=0; i <count ; i++) {
                            result += "X";
                        }
                        num -= 10 * count;
                    }

                    if(num >= 9) {
                        num -= 9;
                        result += "IX";
                    } else if (num >= 5) {
                        num -= 5;
                        result += "V";
                    } else if (num >= 4) {
                        num -= 4;
                        result += "IV";
                    } else {
                        while(num > 0) {
                            if(num >= 3) {
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
                    }
                }
            }
        }
    }

    return result;
}