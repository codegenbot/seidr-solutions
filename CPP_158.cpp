string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    map<char, int> char_count;
    for (char c : max_word) {
        char_count[c]++;
    }
    
    int max_unique_chars = 0;
    for (auto it = char_count.begin(); it != char_count.end(); ++it) {
        if (it->second == 1)
            max_unique_chars++;
    }
    
    return max_word;
}