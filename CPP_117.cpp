bool issame(string s, char c) {
    return s.find(c) != string::npos;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string currentWord;
    int consonantCount = 0;

    for (char c : s) {
        if (c != ' ') {
            if (!issame("aeiouAEIOU", c)) {
                consonantCount++;
            }
            currentWord += c;
        } else {
            if (consonantCount == n) {
                words.push_back(currentWord);
            }
            currentWord = "";
            consonantCount = 0;
        }
    }

    if (consonantCount == n) {
        words.push_back(currentWord);
    }

    return words;
}