string int_to_mini_roman(int num) {
    vector< pair<int, string> > roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, 
                                           {400, "CD"}, {100, "C"}, {90, "XC"}, 
                                           {50, "L"}, {40, "XL"}, {10, "X"}, 
                                           {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string result = "";
    
    for(auto &romanNumeral : roman) {
        while(num >= romanNumeral.first) {
            num -= romanNumeral.first;
            result += romanNumeral.second;
        }
    }
    
    return tolower(result);
}