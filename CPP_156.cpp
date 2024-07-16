string int_to_mini_roman(int number){
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    string roman_numeral = "";
    for (size_t i = 0; i < values.size(); ++i) {
        while (number >= values[i]) {
            number -= values[i];
            roman_numeral += symbols[i];
        }
    }

    return roman_numeral;
}