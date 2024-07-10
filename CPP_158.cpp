string find_max(vector<string> words) {
    string max_word = *words.begin();
    int max_unique_chars = 0;
    
    for (const auto& word : words) {
        int unique_chars = 0;
        set<char> chars(word.begin(), word.end());
        
        if (chars.size() > max_unique_chars) {
            max_unique_chars = chars.size();
            max_word = word;
        }
    }
    
    return max_word;
}