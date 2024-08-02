vector<string> select_words(string s, int n) {
    vector<string> words;
    string word;
    int consonantCount = 0;

    for (char c : s) {
        if (c == ' ') {
            if (consonantCount == n) {
                words.push_back(word);
            }
            word = "";
            consonantCount = 0;
        } else if (isalpha(c)) {
            char lc = tolower(c);
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                consonantCount++;
            }
            word += c;
        }
    }

    if (!word.empty() && consonantCount == n) {
        words.push_back(word);
    }

    return words;
}