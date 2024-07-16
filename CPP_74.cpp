int sum_char(vector<string> v){
        int sum = 0;
        for(auto s: v){
            sum += s.size();
        }
        return sum;
    }
    
    vector<string> total_match(vector<string> lst1, vector<string> lst2){
        if(sum_char(lst1) < sum_char(lst2) || sum_char(lst1) == sum_char(lst2)){
            return lst1;
        } else {
            return lst2;
        }
    }