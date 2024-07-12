unordered_map<char, int> count_unique_chars(const string& word) {
    unordered_map<char, int> char_count;
    for (char c : word) {
        char_count[c] += 1;
    }
    return char_count;
}

string find_max(vector<string> words){
    string max_word;
    int max_unique_chars = 0;
    
    for (const string& word : words) {
        unordered_map<char, int> char_count = count_unique_chars(word);
        
        int unique_chars = char_count.size();
        if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && word < max_word)) {
            max_word = word;
            max_unique_chars = unique_chars;
        }
    }
    
    return max_word;
}