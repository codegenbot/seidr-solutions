vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    int consonants = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else if (isalpha(c)) {
            char lc = tolower(c);
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                consonants++;
            }
            word += c;
        }
    }
    
    if (consonants == n) {
        result.push_back(word);
    }
    
    return result;
}