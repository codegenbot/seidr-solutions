string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    
    map<char, bool> char_map;
    int max_unique = 0;
    for (char c : max_word) {
        if (!char_map[c]) {
            char_map[c] = true;
            max_unique++;
        }
    }
    
    for (string word : words) {
        map<char, bool> temp_char_map;
        int unique = 0;
        for (char c : word) {
            if (!temp_char_map[c]) {
                temp_char_map[c] = true;
                unique++;
            }
        }
        
        if (unique > max_unique) {
            max_word = word;
            max_unique = unique;
        } else if (unique == max_unique && word < max_word) {
            max_word = word;
        }
    }
    
    return max_word;
}