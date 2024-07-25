vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int total_chars_lst1 = 0;
    int total_chars_lst2 = 0;
    
    for (const string& word : lst1) {
        total_chars_lst1 += word.length();
    }
    
    for (const string& word : lst2) {
        total_chars_lst2 += word.length();
    }
    
    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}