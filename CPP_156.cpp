string int_to_mini_roman(int number) {
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string roman_num;
    
    for (int i = 0; number > 0 && i < 13; ++i) {
        while (number >= val[i]) {
            roman_num += roman[i];
            number -= val[i];
        }
    }
    
    return roman_num;
}