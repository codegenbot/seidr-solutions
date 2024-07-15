vector<string> total_match(vector<string> lst1, vector<string> lst2){
    int total_chars_lst1 = 0;
    int total_chars_lst2 = 0;
    
    for(const string& s : lst1){
        total_chars_lst1 += s.size();
    }
    
    for(const string& s : lst2){
        total_chars_lst2 += s.size();
    }
    
    if(total_chars_lst1 == total_chars_lst2){
        return lst1;
    }
    
    return (total_chars_lst1 < total_chars_lst2) ? lst1 : lst2;
}