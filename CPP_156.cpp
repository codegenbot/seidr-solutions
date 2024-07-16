vector<string> roman_numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
vector<int> decimal_values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_roman(int number) {
    string roman = "";
    for (int i = 0; i < decimal_values.size(); i++) {
        while (number >= decimal_values[i]) {
            number -= decimal_values[i];
            roman += roman_numerals[i];
        }
    }
    return roman;
}