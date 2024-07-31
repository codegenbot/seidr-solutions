string int_to_mini_romank(int number){
    vector<string> roman = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    
    string result = "";
    
    for(int i = 12; i >= 0; i--){
        while(number >= values[i]){
            result += roman[i];
            number -= values[i];
        }
    }
    
    for(char &c : result){
        c = tolower(c);
    }
    
    return result;
}