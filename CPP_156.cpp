string int_to_mini_roman(int num) {
    string roman[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", 
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
    string roman_upper[] = {"", "M", "MM", "MMM", "MMMM"};

    int hundreds = num / 100;
    int tens = (num % 100) / 10;
    int ones = num % 10;

    return roman[hundreds] + roman[tens] + roman[ones];
}