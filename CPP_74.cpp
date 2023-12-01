vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int total1 = 0;
    int total2 = 0;
    
    for(string s : lst1){
        total1 += s.length();
    }
    
    for(string s : lst2){
        total2 += s.length();
    }
    
    if(total1 < total2){
        return lst1;
    }
    else{
        return lst2;
    }
}