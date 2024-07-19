string int_to_mini_roman(int number){
    vector<string> roman_numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string result = "";
    for (int i = 0; i < values.size(); ++i) {
        while (number >= values[i]) {
            result += roman_numerals[i];
            number -= values[i];
        }
    }
    
    return result;
}