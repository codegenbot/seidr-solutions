string int_to_mini_roman(int number) {
    vector<string> romanValues = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> arabicValues = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string result = "";
    
    for(int i = 0; i < arabicValues.size(); i++) {
        while(number >= arabicValues[i]) {
            number -= arabicValues[i];
            result += romanValues[i];
        }
    }
    
    return result;
}