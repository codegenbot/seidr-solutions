vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    int consonant_count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonant_count == n) {
                result.push_back(word);
            }
            word.clear();
            consonant_count = 0;
        } else if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
            consonant_count++;
        }
        word.push_back(c);
    }
    
    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }
    
    return result;
}