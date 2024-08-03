string int_to_mini_roman(int number) {
    vector<pair<int, string>> romanNums = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                                            {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
                                            {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};
    string roman = "";
    for (const auto& pair : romanNums) {
        while (number >= pair.first) {
            roman += pair.second;
            number -= pair.first;
        }
        if (number > 0) {
            roman += ' ';
            for (int i = romanNums.size() - 1; i >= 0; --i) {
                while (number >= romanNums[i].first) {
                    roman += romanNums[i].second[0];
                    number -= romanNums[i].first;
                }
            }
        }
    }
    return roman;
}