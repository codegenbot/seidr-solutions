```
std::string int_to_mini_roman(int num) {
    string roman;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            num -= values[i];
            roman += romanNumerals[i];
        }
    }
    
    return roman;
}