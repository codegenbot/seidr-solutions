vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
    int consonant_count;
    for (char c : s) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                if (!word.empty()) {
                    word.clear();
                    consonant_count = 0;
                }
            } else {
                word += c;
                consonant_count++;
                if (consonant_count == n) {
                    result.push_back(word);
                    word.clear();
                    consonant_count = 0;
                }
            }
        } else {
            if (!word.empty()) {
                word.clear();
                consonant_count = 0;
            }
        }
    }
    
    return result;
}