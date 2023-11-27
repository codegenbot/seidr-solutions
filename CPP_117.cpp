vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    int consonants = 0;
    
    for (char c : s) {
        if (c != ' ') {
            word += c;
            if (isalpha(c) && !isVowel(c)) {
                consonants++;
            }
        } else {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        }
    }
    
    if (consonants == n) {
        result.push_back(word);
    }
    
    return result;
}