string int_to_mini_romank(int number){
    string result = "";
    vector<pair<int, string>> numeral_map = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"}, {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"}, {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};

    for (const auto &numeral : numeral_map) {
        while (number >= numeral.first) {
            result += numeral.second;
            number -= numeral.first;
        }
    }

    return result;
}