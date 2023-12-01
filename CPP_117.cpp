vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }

    string word = "";
    for (char ch : s) {
        if (ch == ' ') {
            int consonantCount = 0;
            for (char c : word) {
                if (isalpha(c) && !isvowel(c)) {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += ch;
        }
    }

    int consonantCount = 0;
    for (char c : word) {
        if (isalpha(c) && !isvowel(c)) {
            consonantCount++;
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }

    return result;
}