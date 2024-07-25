string int_to_mini_roman(int number){
        vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> rom = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
        string res = "";
        int i = 0;
        while(number > 0){
            if(number >= val[i]){
                res += rom[i];
                number -= val[i];
            } else {
                i++;
            }
        }
        return res;
    }