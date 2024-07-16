string int_to_mini_roman(int number) {
    string roman[] = {"", "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int val[] = {0, 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    
    string result = "";
    
    for(int i=0; number>0 && i<14; i++){
        while(number >= val[i]){
            number -= val[i];
            result += roman[i];
        }
    }
    
    return tolower(result);
}