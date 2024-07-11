string int_to_mini_roman(int number){
    string roman = "";
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            number -= values[i];
            roman += symbols[i];
        }
    }

    transform(roman.begin(), roman.end(), roman.begin(), ::tolower);

    return roman;
}