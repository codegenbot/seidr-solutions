string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    int max_unique_chars = 0;
    for (char c : max_word) {
        bool is_unique = true;
        for (string s : words) {
            if (s.find(c) != string::npos && s.size() > 1) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            max_unique_chars++;
        }
    }
    
    return max_word;
}