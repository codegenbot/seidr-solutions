string int_to_mini_roman(int num) {
    vector< string > romanNumerals = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    vector< int > romanValues = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };

    string result;

    for (int i = 0; i < romanValues.size(); i++) {
        while (num >= romanValues[i]) {
            num -= romanValues[i];
            result += romanNumerals[i];
        }
    }

    return result;
}