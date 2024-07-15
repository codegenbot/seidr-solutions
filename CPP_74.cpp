int sum_chars(vector<string> lst){
        int sum = 0;
        for(auto str : lst){
            sum += str.size();
        }
        return sum;
    }

    vector<string> total_match(vector<string> lst1, vector<string> lst2){
        if(sum_chars(lst1) < sum_chars(lst2)){
            return lst1;
        }
        return lst2;
    }