```
string int_to_mini_roman(int num) {
    string miniRomans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int romanValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string result = "";
    
    for (int i = 0; i < 13; i++) {
        while (num >= romanValues[i] && !result.empty()) {
            num -= romanValues[i];
            result += miniRomans[i];
        }
        
        if (!result.empty() && num == 0) {
            break;
        }
    }
    
    return result;
}