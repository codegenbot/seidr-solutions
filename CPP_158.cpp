string find_max(vector<string> words) {
    string max_word = *min_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for (string word : words) {
        if (word.size() == max_word.size() && count(word.begin(), word.end(), unique_word[word.size()])) {
            max_word = word;
            break;
        }
    }
    return max_word;
}