string int_to_mini_roman(int number){
    string roman_numerals[] = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    int values[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";
    
    int i = sizeof(values) / sizeof(values[0]) - 1;
    
    while (number > 0) {
        int div = number / values[i];
        number %= values[i];
        
        while (div--) {
            result += roman_numerals[i];
        }
        
        i--;
    }
    
    return result;
}