vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    string word = "";
    int consonantCount = 0;
    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }
    return result;
}