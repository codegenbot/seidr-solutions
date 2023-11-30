vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int consonants = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (consonants == n) {
                result.push_back(word);
            }
            word = "";
            consonants = 0;
        } else {
            if (isalpha(s[i])) {
                char c = tolower(s[i]);
                if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                    consonants++;
                }
            }
            word += s[i];
        }
    }

    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}