vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int count1 = 0, count2 = 0;
    
    for(string str : lst1){
        count1 += str.length();
    }
    
    for(string str : lst2){
        count2 += str.length();
    }
    
    return count1 < count2 ? lst1 : lst2;
}