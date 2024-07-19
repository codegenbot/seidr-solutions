string max_word;
    int max_unique = 0;
    
    for (string word : words) {
        int unique_chars = 0;
        vector<bool> seen(26, false);
        
        for (char c : word) {
            if (!seen[c - 'a']) {
                seen[c - 'a'] = true;
                unique_chars++;
            }
        }
        
        if (unique_chars > max_unique || (unique_chars == max_unique && word < max_word)) {
            max_word = word;
            max_unique = unique_chars;
        }
    }
    
    return max_word;
}