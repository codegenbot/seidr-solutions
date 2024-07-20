string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        if (word.length() >= max_word.length()) {
            set<char> unique_chars(word.begin(), word.end());
            if (unique_chars.size() > (set<char>(max_word.begin(), max_word.end())).size()) {
                max_word = word;
            }
        }
    }
    return max_word;
}