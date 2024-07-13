string int_to_mini_roman(int num) {
    string roman = "";
    vector<pair<int, string>> romans = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                          {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                          {10, "X"}, {9, "IX"}, {1, "I"}};
    for (const auto &p : romans) {
        while (num >= p.first) {
            roman += p.second;
            num -= p.first;
        }
        if (num > 0) {
            roman += 'a' + (roman.length() % 2);
            --num;
        }
    }
    return roman;
}