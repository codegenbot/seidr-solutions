string int_to_mini_roman(int number){
    vector<string> romans{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> values{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string result = "";

    for (int i = 0; i < 13; i++) {
        while (number >= values[i]) {
            result += romans[i];
            number -= values[i];
        }
    }
    
    transform(result.begin(), result.end(), result.begin(), ::tolower);

    return result;
}