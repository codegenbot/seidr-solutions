vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    int consonant_count = 0;
    
    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                if (!word.empty()) {
                    if (consonant_count == n) {
                        result.push_back(word);
                    }
                    word = "";
                    consonant_count = 0;
                }
            } else {
                word += c;
                consonant_count++;
            }
        } else {
            if (!word.empty() && consonant_count == n) {
                result.push_back(word);
            }
            word = "";
            consonant_count = 0;
        }
    }
    
    if (!word.empty() && consonant_count == n) {
        result.push_back(word);
    }
    
    return result;
}