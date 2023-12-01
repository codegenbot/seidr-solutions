string int_to_mini_roman(int number){
    vector<pair<int, string>> romanNumerals = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"}, {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"}, {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};
    string result = "";

    for(auto& pair : romanNumerals){
        int value = pair.first;
        string roman = pair.second;

        while(number >= value){
            result += roman;
            number -= value;
        }
    }

    return result;
}