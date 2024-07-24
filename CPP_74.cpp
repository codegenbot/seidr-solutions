vector<string> total_match(vector<string> lst1,vector<string> lst2){
    vector<string> result;
    
    if(lst1.size() > 0 && lst2.size() > 0){
        int sum1 = 0, sum2 = 0;
        
        for(const string& s : lst1)
            sum1 += s.length();
        
        for(const string& s : lst2)
            sum2 += s.length();
        
        if(sum1 < sum2) {
            result = lst1;
        } else if (sum1 > sum2) {
            result = lst2;
        } else {
            result = lst1;
        }
    } else {
        result = (lst1.size() > 0)? lst1 : lst2;
    }
    
    return result;
}