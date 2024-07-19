vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    int consonants = 0;
    for (char c : s) {
        if (c != ' ') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonants++;
            }
            word += c;
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