string int_to_mini_roman(int number) {
    vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> decimalValues = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string result = "";
    for (int i = 0; i < romanNumerals.size(); i++) {
        while (number >= decimalValues[i]) {
            number -= decimalValues[i];
            result += romanNumerals[i].toLowerCase();
        }
    }
    return result;
}