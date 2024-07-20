string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [&](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    for (auto& word : words) {
        if (word.size() >= max_word.size()) {
            max_word = word;
            break;
        }
    }
    return max_word;
}