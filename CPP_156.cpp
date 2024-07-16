string int_to_mini_romank(int number){
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        string result = "";
        for(size_t i=0; i<values.size(); ++i){
            while(number >= values[i]){
                result += symbols[i];
                number -= values[i];
            }
        }
        
        // Convert result to lowercase
        for(char &c : result){
            c = tolower(c);
        }
        
        return result;
    }