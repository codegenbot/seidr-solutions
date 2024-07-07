vector<string> romanNumerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int numerals[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_roman(int number) {
    string result = "";
    for (int i = 0; i < 13; i++) {
        while (number >= numerals[i]) {
            result += romanNumerals[i];
            number -= numerals[i];
        }
    }
    return tolower(result);
}