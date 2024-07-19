string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    for (string word : words) {
        if (word.length() > max_word.length() || 
            (word.length() == max_word.length() && 
             count(word.begin(), word.end(), unique(word.begin(), word.end())[0]) > 
             count(max_word.begin(), max_word.end(), unique(max_word.begin(), max_word.end())[0]))) {
            max_word = word;
        }
    }
    
    return max_word;
}