vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int totalChars1 = 0;
    int totalChars2 = 0;
    
    // Calculate the total number of characters in lst1
    for(const string& str : lst1){
        totalChars1 += str.size();
    }
    
    // Calculate the total number of characters in lst2
    for(const string& str : lst2){
        totalChars2 += str.size();
    }
    
    if(totalChars1 < totalChars2 || (totalChars1 == totalChars2 && lst1.size() > 0)){
        return lst1;
    }
    else{
        return lst2;
    }
}