vector<string> roman_numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
vector<int> roman_values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

string int_to_mini_roman(int number) {
    string result;
    for (int i = 0; i < roman_values.size(); ++i) {
        while (number >= roman_values[i]) {
            number -= roman_values[i];
            result += roman_numerals[i];
        }
    }
    return result;
}