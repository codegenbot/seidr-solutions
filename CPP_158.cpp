string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for (string word : words) {
        if (word.size() >= max_word.size() && unique(word.begin(), word.end()).size() > unique(max_word.begin(), max_word.end()).size()) {
            max_word = word;
        }
    }
    return max_word;
}