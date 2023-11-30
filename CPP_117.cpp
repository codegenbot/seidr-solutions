vector<string> select_words(string s, int n) {
    vector<string> result;
    vector<string> words;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += s[i];
        }
    }
    words.push_back(word);
    for (string w : words) {
        int consonantCount = 0;
        for (char c : w) {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                consonantCount++;
            }
        }
        if (consonantCount == n) {
            result.push_back(w);
        }
    }
    return result;
}