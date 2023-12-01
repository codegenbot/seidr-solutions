vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (word.length() >= n) {
                int consonantCount = 0;
                for (int j = 0; j < word.length(); j++) {
                    if (isalpha(word[j]) && !isVowel(word[j])) {
                        consonantCount++;
                    }
                }
                if (consonantCount == n) {
                    result.push_back(word);
                }
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    
    if (word.length() >= n) {
        int consonantCount = 0;
        for (int j = 0; j < word.length(); j++) {
            if (isalpha(word[j]) && !isVowel(word[j])) {
                consonantCount++;
            }
        }
        if (consonantCount == n) {
            result.push_back(word);
        }
    }
    
    return result;
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}