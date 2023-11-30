vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    
    if (!word.empty() && count_consonants(word) == n) {
        result.push_back(word);
    }
    
    return result;
}