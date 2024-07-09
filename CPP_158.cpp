string find_max(vector<string> words){
    string result;
    int max_unique = 0;
    
    for(auto& word : words){
        int unique_count = 0;
        set<char> unique_chars(word.begin(), word.end());
        
        if(unique_chars.size() > max_unique){
            max_unique = unique_chars.size();
            result = word;
        }
    }
    
    return result;
}