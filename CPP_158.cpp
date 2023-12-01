string find_max(vector<string> words){
    string max_word = "";
    int max_unique_chars = 0;
    
    for(auto word : words){
        int unique_chars = 0;
        vector<char> chars;
        
        for(auto ch : word){
            if(find(chars.begin(), chars.end(), ch) == chars.end()){
                chars.push_back(ch);
                unique_chars++;
            }
        }
        
        if(unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)){
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }
    
    return max_word;
}