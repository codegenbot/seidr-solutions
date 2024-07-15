string int_to_mini_roman(int number){
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> romans = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
        string result = "";
        
        for(int i = 0; i < 13; i++){
            while(number >= values[i]){
                result += romans[i];
                number -= values[i];
            }
        }
        
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }