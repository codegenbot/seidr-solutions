string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    for (string word : words) {
        if (word.length() >= max_word.length() && unique(word).size() > unique(max_word).size()) {
            max_word = word;
        }
    }
    
    return max_word;
}