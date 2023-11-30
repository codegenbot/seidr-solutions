vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    for(string str : lst1){
        totalChars1 += str.size();
    }
    
    for(string str : lst2){
        totalChars2 += str.size();
    }
    
    if(totalChars1 < totalChars2){
        return lst1;
    }
    
    return lst2;
}