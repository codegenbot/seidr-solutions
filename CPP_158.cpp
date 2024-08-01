string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string &a, const string &b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string word : words) {
        int unique_chars = 0;
        bool found[256] = {false};
        for (char c : word) {
            if (!found[c]) {
                found[c] = true;
                unique_chars++;
            }
        }
        if (unique_chars > 0 && unique_chars > max_word.length() - unique_chars) {
            max_word = word;
        }
    }
    return max_word;
}