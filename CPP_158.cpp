string find_max(vector<string> words){
    string maxWord = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    
    for (string word : words) {
        if (word.length() > maxWord.length() || 
            (word.length() == maxWord.length() && word < maxWord)) {
            maxWord = word;
        }
    }
    
    return maxWord;
}