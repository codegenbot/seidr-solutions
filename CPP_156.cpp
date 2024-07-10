vector<pair<int, string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                     {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                     {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

string int_to_mini_roman(int number) {
    string result = "";
    for (auto& pair : roman) {
        while (number >= pair.first) {
            result += pair.second;
            number -= pair.first;
        }
    }
    return result;
}