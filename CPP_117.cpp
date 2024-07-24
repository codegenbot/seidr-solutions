vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    bool in_word = false;

    for (char c : s) {
        if (isalpha(c)) {
            if (!in_word) {
                word += c;
                in_word = true;
            } else {
                word += c;
            }
        } else {
            if (in_word) {
                int consonants = 0;
                for (char d : word) {
                    if (!isvowel(d)) {
                        consonants++;
                    }
                }
                if (consonants == n) {
                    result.push_back(word);
                }
                word.clear();
                in_word = false;
            }
        }
    }

    int consonants = 0;
    for (char d : word) {
        if (!isvowel(d)) {
            consonants++;
        }
    }
    if (consonants == n) {
        result.push_back(word);
    }

    return result;
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}