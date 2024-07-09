string int_to_mini_roman(int number) {
    string result = "";
    vector<pair<int, string>> romanNumeralMap = {{1000, "m"}, {900, "cm"},
                                                    {500, "d"}, {400, "cd"},
                                                    {100, "c"}, {90, "xc"},
                                                    {50, "l"}, {40, "xl"},
                                                    {10, "x"}, {9, "ix"},
                                                    {5, "v"}, {4, "iv"},
                                                    {1, "i"}};

    for (const auto &roman : romanNumeralMap) {
        while (number >= roman.first) {
            number -= roman.first;
            result += roman.second;
        }
    }

    return tolower(result);
}