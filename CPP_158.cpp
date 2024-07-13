string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    
    for (string word : words) {
        if (word.size() >= max_word.size() && count(word.begin(), word.end(), unique(word.begin(), word.end())[0]) == 1) {
            max_word = word;
        }
    }
    
    return max_word;
}