vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    int consonantCount = 0;
    for (char c : s) {
        if (c != ' ') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonantCount++;
            }
            word.push_back(c);
        } else {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word.clear();
            consonantCount = 0;
        }
    }
    
    if (consonantCount == n) {
        result.push_back(word);
    }
    
    return result;
}