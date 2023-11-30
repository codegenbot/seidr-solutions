vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' || i == s.length() - 1) {
            if (i == s.length() - 1) {
                word += s[i];
            }
            int consonantCount = 0;
            for (int j = 0; j < word.length(); j++) {
                if (isalpha(word[j]) && !isVowel(word[j])) {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    return result;
}