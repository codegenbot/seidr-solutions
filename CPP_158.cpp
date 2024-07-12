string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (const auto& word : words) {
        if (word.length() == max_word.length()) {
            size_t unique_chars_a = 0, unique_chars_b = 0;
            set<char> chars_a(word.begin(), word.end());
            set<char> chars_b(max_word.begin(), max_word.end());
            for (char c : word) {
                if (chars_a.count(c)) {
                    ++unique_chars_a;
                }
            }
            for (char c : max_word) {
                if (chars_b.count(c)) {
                    ++unique_chars_b;
                }
            }
            if (unique_chars_a > unique_chars_b) {
                return word;
            }
        }
    }
    return max_word;
}