string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for (string word : words) {
        if (word.size() >= max_word.size()) {
            set<char> unique_chars(word.begin(), word.end());
            if (unique_chars.size() > count(unique_chars.begin(), unique_chars.end(),
                [](char c) { return !isalnum(c); })) {
                max_word = word;
            }
        }
    }
    return max_word;
}