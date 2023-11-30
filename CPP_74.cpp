vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int sum1 = 0, sum2 = 0;
    
    for(const string& str : lst1){
        sum1 += str.size();
    }
    
    for(const string& str : lst2){
        sum2 += str.size();
    }
    
    if(sum1 < sum2){
        return lst1;
    }
    else{
        return lst2;
    }
}