vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int total1 = 0; // Total number of characters in lst1
    int total2 = 0; // Total number of characters in lst2
    
    // Calculate total1
    for(string s : lst1){
        total1 += s.size();
    }
    
    // Calculate total2
    for(string s : lst2){
        total2 += s.size();
    }
    
    // Compare total1 and total2
    if(total1 < total2){
        return lst1;
    }
    else{
        return lst2;
    }
}