string int_to_mini_roman(int number){
    string romanNumbers[] = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string roman = "";
    for (int i = 0; i < 13; i++){
        while (number >= decimalValues[i]){
            number -= decimalValues[i];
            roman += romanNumbers[i];
        }
    }
    
    return roman;
}