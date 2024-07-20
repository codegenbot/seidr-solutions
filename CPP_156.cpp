string int_to_mini_roman(int number) {
    string romans[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", 
                       "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX",
                       "XX", "XXI", "XXII", "XXIII", "XXIV", "XXV", "XXVI", "XXVII", "XXVIII", "XXIX",
                       "XXX", "XXXI", "XXXII", "XXXIII", "XXXIV", "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX",
                       "XL", "XLI", "XLII", "XLIII", "XLIV", "XLV", "XLVI", "XLVII", "XLVIII", "XLIX",
                       "L", "LI", "LII", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX",
                       "LX", "LXI", "LXII", "LXIII", "LXIV", "LXV", "LXVI", "LXVII", "LXVIII", "LXIX",
                       "LXX", "LXXI", "LXXII", "LXXIII", "LXXIV", "LXXV", "LXXVI", "LXXVII", "LXXVIII", "LXXIX",
                       "LXXX", "LXXXI", "LXXXII", "LXXXIII", "LXXXIV", "LXXXV", "LXXXVI", "LXXXVII", "LXXXVIII", "LXXXIX",
                       "XC", "XCI", "XCII", "XCIII", "XCV", "XCVI", "XCVII", "XCVIII", "XCIX",
                       "C"};
    string thousands = "M";
    string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCCC", "CM"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int m = number / 1000;
    int c = (number % 1000) / 100;
    int x = (number % 100) / 10;
    int i = number % 10;

    string result = "";
    if(m > 0) {
        for(int k = 0; k < m; k++) {
            result += thousands;
        }
    }
    if(c > 0) {
        result += hundreds[c];
    }
    if(x > 0) {
        result += tens[x];
    }
    if(i > 0) {
        result += ones[i];
    }

    return result;
}