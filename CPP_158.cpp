string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        if (word.length() == max_word.length()) {
            int unique_chars_a = 0, unique_chars_b = 0;
            set<char> set_a(word.begin(), word.end());
            set<char> set_b(max_word.begin(), max_word.end());
            unique_chars_a = set_a.size();
            unique_chars_b = set_b.size();
            if (unique_chars_a > unique_chars_b) {
                max_word = word;
            }
        }
    }
    return max_word;
}