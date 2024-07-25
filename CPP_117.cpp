bool issame(char a, char b) {
    return tolower(a) == tolower(b);
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string currentWord;
    int consonantCount = 0;

    for (char c : s) {
        if (c != ' ') {
            if (!issame(c, 'a') && !issame(c, 'e') && !issame(c, 'i') && !issame(c, 'o') && !issame(c, 'u')) {
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