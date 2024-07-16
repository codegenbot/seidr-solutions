vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    int countConsonants = 0;

    for (char c : s) {
        if (c == ' ') {
            if (countConsonants == n) {
                result.push_back(word);
            }
            word = "";
            countConsonants = 0;
        } else if (isalpha(c)) {
            char lc = tolower(c);
            if (lc != 'a' && lc != 'e' && lc != 'i' && lc != 'o' && lc != 'u') {
                countConsonants++;
            }
            word += c;
        }
    }

    if (countConsonants == n) {
        result.push_back(word);
    }

    return result;
}