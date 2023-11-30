string find_max(vector<string> words){
    string max_word = "";
    int max_unique = 0;
    
    for (string word : words) {
        int unique_chars = 0;
        vector<char> seen_chars;
        
        for (char c : word) {
            if (find(seen_chars.begin(), seen_chars.end(), c) == seen_chars.end()) {
                unique_chars++;
                seen_chars.push_back(c);
            }
        }
        
        if (unique_chars > max_unique || (unique_chars == max_unique && word < max_word)) {
            max_word = word;
            max_unique = unique_chars;
        }
    }
    
    return max_word;
}