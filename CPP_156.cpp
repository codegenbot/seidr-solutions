string int_to_mini_roman(int number) {
    vector<pair<int, string>> romanNumeralValues = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                                     {400, "CD"}, {100, "C"}, {90, "XC"},
                                                     {50, "L"}, {40, "XL"}, {10, "X"},
                                                     {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string romanNumeral = "";
    
    for (const auto& pair : romanNumeralValues) {
        while (number >= pair.first) {
            number -= pair.first;
            romanNumeral += pair.second;
        }
    }
    
    return romanNumeral;
}