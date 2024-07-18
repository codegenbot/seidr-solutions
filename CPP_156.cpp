string int_to_mini_romank(int number){
    vector<string> roman_numeral = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";
    
    for (int i = 12; i >= 0; i--) {
        while (number >= values[i]) {
            result += roman_numeral[i];
            number -= values[i];
        }
    }
    
    return result;
}