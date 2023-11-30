vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    string word = "";
    int consonantCount = 0;
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else {
            if (isalpha(s[i]) && !isVowel(s[i])) {
                consonantCount++;
            }
            word += s[i];
        }
    }
    return result;
}