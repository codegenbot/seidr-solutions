vector<string> select_words(string s, int n) {
    vector<string> result;
    int count = 0;
    string word = "";
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            count = 0;
            word = "";
        } else {
            if (isalpha(s[i]) && !is_vowel(s[i])) {
                count++;
            }
            word += s[i];
        }
    }
    
    return result;
}