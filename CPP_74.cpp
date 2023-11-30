vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int sum1 = 0, sum2 = 0;
    
    for(string word : lst1){
        sum1 += word.length();
    }
    
    for(string word : lst2){
        sum2 += word.length();
    }
    
    if(sum1 < sum2){
        return lst1;
    }else{
        return lst2;
    }
}