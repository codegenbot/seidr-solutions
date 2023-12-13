vector<string> select_words(string s, int n) {
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (word.length() > 0) {
                int consonantCount = 0;
                for (int j = 0; j < word.length(); j++) {
                    if (isalpha(word[j]) && !isvowel(word[j])) {
                        consonantCount++;
                    }
                }
                if (consonantCount == n) {
                    words.push_back(word);
                }
                word = "";
            }
        } else {
            word += s[i];
        }
    }
    if (word.length() > 0) {
        int consonantCount = 0;
        for (int j = 0; j < word.length(); j++) {
            if (isalpha(word[j]) && !isvowel(word[j])) {
                consonantCount++;
            }
        }
        if (consonantCount == n) {
            words.push_back(word);
        }
    }
    return words;
}