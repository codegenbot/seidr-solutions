vector<pair<int, string>> romanNumerals = {{1000, "m"}, {900, "cm"}, {500, "d"},
                                            {400, "cd"}, {100, "c"}, {90, "cx"},
                                            {50, "l"}, {40, "xl"}, {10, "x"},
                                            {9, "ix"}, {5, "v"}, {4, "iv"},
                                            {1, "i"}};

string int_to_mini_roman(int number) {
    string roman = "";
    for (auto& pair : romanNumerals) {
        while (number >= pair.first) {
            roman += pair.second;
            number -= pair.first;
        }
    }
    return roman;
}