bool issame(string s1, string s2) {
    return s1 == s2;
}

vector<string> select_words(string s, int n) {
    vector<string> words;
    string currentWord;
    int consonantCount = 0;

    for (char c : s) {
        if (c != ' ') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
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