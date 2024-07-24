vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
vector<int> romanValues = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_roman(int number) {
    string result;
    for (int i = 0; i < romanValues.size(); ++i) {
        while (number >= romanValues[i]) {
            result += romanNumerals[i];
            number -= romanValues[i];
        }
    }
    return tolower(result);
}