string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (auto &word : words) {
        if (word.length() == max_word.length() && word != max_word) {
            max_word = *max_element({word, max_word},
                [](const string& a, const string& b) {
                    return a < b;
                });
        }
    }
    return max_word;
}