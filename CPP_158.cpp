string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    for (string word : words) {
        int unique_chars = 0;
        set<char> seen;
        for (char c : word) {
            if (seen.insert(c).second) {
                unique_chars++;
            }
        }
        
        if (unique_chars > count(set<string>(max_word.begin(), max_word.end()), set<char>()) || 
            (unique_chars == count(set<string>(max_word.begin(), max_word.end()), set<char>()) && word < max_word)) {
            max_word = word;
        }
    }
    
    return max_word;
}