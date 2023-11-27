vector<string> select_words(string s, int n) {
    vector<string> result;
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
            word += s[i];
            if (isalpha(s[i]) && !isVowel(s[i])) {
                consonantCount++;
            }
        }
    }

    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}