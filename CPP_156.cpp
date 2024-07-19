vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
vector<int> numerals = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_roman(int number) {
    string result;
    for (int i = 0; i < numerals.size(); i++) {
        while (number >= numerals[i]) {
            number -= numerals[i];
            result += romanNumerals[i];
        }
    }
    return result;
}