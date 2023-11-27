vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int sum1 = 0, sum2 = 0;
    
    for(string s: lst1){
        sum1 += s.length(); // calculate total number of chars in lst1
    }
    
    for(string s: lst2){
        sum2 += s.length(); // calculate total number of chars in lst2
    }
    
    if(sum1 < sum2){ // if sum of chars in lst1 is less than lst2, return lst1
        return lst1;
    }
    else{
        return lst2; // otherwise, return lst2
    }
}