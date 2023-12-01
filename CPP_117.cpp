vector<string> select_words(string s, int n) {
    vector<string> result;
    int consonantCount = 0;
    string word = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (isConsonant(s[i])) {
                consonantCount++;
            }
        } else {
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}