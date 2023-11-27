vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
            if (is_consonant(s[i])) {
                consonants++;
            }
        } else {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}

bool is_consonant(char c) {
    c = tolower(c);
    return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}