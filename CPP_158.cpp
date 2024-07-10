string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [&](const string& a, const string& b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            }
            size_t unique_chars_a = a.length();
            for (char c : a) {
                if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
                    unique_chars_a--;
                }
            }
            size_t unique_chars_b = b.length();
            for (char c : b) {
                if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
                    unique_chars_b--;
                }
            }
            return unique_chars_a > unique_chars_b;
        });
    return max_word;
}