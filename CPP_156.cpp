```
string int_to_mini_roman(int number) {
    vector<string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string mini_roman;
    
    for (int i = 0; i < roman.size(); i++) {
        while (number >= values[i] && number > 0) {
            number -= values[i];
            mini_roman += roman[i];
        }
    }
    
    return mini_roman;
}