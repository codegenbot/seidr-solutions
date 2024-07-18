vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    
    for (char c : s) {
        if (c == ' ' || c == '\n' || c == '\t') {
            int consonants = 0;
            for (char ch : word) {
                if (isalpha(ch) && !strchr("aeiouAEIOU", ch)) {
                    consonants++;
                }
            }
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        int consonants = 0;
        for (char ch : word) {
            if (isalpha(ch) && !strchr("aeiouAEIOU", ch)) {
                consonants++;
            }
        }
        if (consonants == n) {
            result.push_back(word);
        }
    }
    
    return result;
}