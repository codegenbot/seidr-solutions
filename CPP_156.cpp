string int_to_mini_roman(int number){
    vector<int> numbers = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    vector<string> romans = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    string result = "";
    
    int i = romans.size() - 1;
    while(number > 0){
        int div = number / numbers[i];
        number %= numbers[i];
        while(div--){
            result += romans[i];
        }
        --i;
    }
    
    return result;
}