string int_to_mini_roman(int number) {
    vector<pair<int, string>> romans = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                                         {100, "c"}, {90, "cx"}, {50, "l"}, {40, "xl"},
                                         {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"},
                                         {1, "i"}};
    string roman = "";
    for (const auto &romanNumeral : romans) {
        while (number >= romanNumeral.first) {
            roman += romanNumeral.second;
            number -= romanNumeral.first;
        }
    }
    return roman;
}