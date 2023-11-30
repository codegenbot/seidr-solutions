vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    string word = "";
    int consonantCount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else {
            if (isalpha(s[i])) {
                char c = tolower(s[i]);
                if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                    consonantCount++;
                }
            }
            word += s[i];
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }
    return result;
}