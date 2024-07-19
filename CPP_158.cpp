string find_max(vector<string> words) {
    string result = "";
    int max_unique_chars = 0;
    
    for (const string& word : words) {
        int chars[26] = {0};
        int unique_chars = 0;
        
        for (char c : word) {
            if (++chars[c - 'a'] == 1) {
                unique_chars++;
            }
        }

        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < result)) {
            max_unique_chars = unique_chars;
            result = word;
        }
    }
    
    return result;
}