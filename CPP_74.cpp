int sumChars(vector<string> lst){
        int sum = 0;
        for(string str : lst){
            sum += str.size();
        }
        return sum;
    }
    
    vector<string> total_match(vector<string> lst1, vector<string> lst2){
        if(sumChars(lst1) < sumChars(lst2)){
            return lst1;
        }
        return lst2;
    }