string find_max(vector<string> words){
    string max_word = "";
    int max_unique_chars = 0;
    
    for (string word : words) {
        int unique_chars = 0;
        int chars[26] = {0}; // Assuming only lowercase English letters
        
        for (char c : word) {
            if (chars[c - 'a']++ == 0) {
                unique_chars++;
            }
        }
        
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_unique_chars = unique_chars;
            max_word = word;
        }
    }
    
    return max_word;
}