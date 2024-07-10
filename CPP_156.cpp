std::string int_to_mini_roman(int number) {
    vector<std::string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> decimalValues = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    std::string romanNumeral;

    for (int i = 0; i < decimalValues.size(); ++i) {
        while (number >= decimalValues[i]) {
            number -= decimalValues[i];
            romanNumeral += romanNumerals[i];
        }
    }

    return romanNumeral;
}