vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    bool inWord = false;

    for (char c : s) {
        if (isalpha(c)) {
            if (!inWord) {
                inWord = true;
                word += tolower(c);
            } else {
                word += tolower(c);
            }
        } else {
            if (inWord) {
                int consonants = 0;
                for (char w : word) {
                    if (!(w == 'a' || w == 'e' || w == 'i' || w == 'o' || w == 'u')) {
                        consonants++;
                    }
                }
                if (consonants == n) {
                    result.push_back(word);
                }
                inWord = false;
                word = "";
            }
        }
    }

    if (inWord) {
        int consonants = 0;
        for (char w : word) {
            if (!(w == 'a' || w == 'e' || w == 'i' || w == 'o' || w == 'u')) {
                consonants++;
            }
        }
        if (consonants == n) {
            result.push_back(word);
        }
    }

    return result;
}