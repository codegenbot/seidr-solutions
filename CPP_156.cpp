string int_to_mini_romank(int number) {
    string result = "";
    vector<pair<int, string>> roman_values = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"}, {100, "c"},
        {90, "xc"}, {50, "l"}, {40, "xl"}, {10, "x"}, {9, "ix"},
        {5, "v"}, {4, "iv"}, {1, "i"}
    };

    for (const auto& pair : roman_values) {
        while (number >= pair.first) {
            result += pair.second;
            number -= pair.first;
        }
    }

    transform(result.begin(), result.end(), result.begin(), ::tolower);

    return result;
}