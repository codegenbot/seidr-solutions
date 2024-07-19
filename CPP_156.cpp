vector<pair<int, string>> roman_numerals = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                                             {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
                                             {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};
string int_to_mini_roman(int number) {
    string roman_numeral = "";
    for (const auto &roman_numeral_value : roman_numerals) {
        while (number >= roman_numeral_value.first) {
            roman_numeral += roman_numeral_value.second;
            number -= roman_numeral_value.first;
        }
    }
    return roman_numeral;
}