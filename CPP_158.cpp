string find_max(vector<string> words) {
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    
    map<char, bool> char_map;
    for (char c : max_word) {
        char_map[c] = true;
    }
    int unique_chars = 0;
    for (auto& p : char_map) {
        if (!p.second) continue;
        unique_chars++;
    }
    
    return max_word;
}