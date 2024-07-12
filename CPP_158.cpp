string max_word = "";
    int max_unique_chars = 0;
    
    for (const string& word : words) {
        int unique_chars = 0;
        int char_count[26] = {0};
        
        for (char c : word) {
            if (char_count[c - 'a'] == 0) {
                unique_chars++;
            }
            char_count[c - 'a']++;
        }
        
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }
    
    return max_word;
}