string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (int i = 0; i < max_word.size(); i++) {
        set<char> s(max_word.begin(), max_word.begin() + i + 1);
        if (s.size() == i + 1) {
            return max_word;
        }
    }
    return max_word;
}