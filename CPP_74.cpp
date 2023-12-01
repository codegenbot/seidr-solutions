vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    // Calculate total number of characters in lst1
    for(string str : lst1){
        totalChars1 += str.length();
    }
    
    // Calculate total number of characters in lst2
    for(string str : lst2){
        totalChars2 += str.length();
    }
    
    // Compare total number of characters and return the appropriate vector
    if(totalChars1 < totalChars2){
        return lst1;
    }
    else{
        return lst2;
    }
}