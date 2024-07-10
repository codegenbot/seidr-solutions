vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            if (word.length() > 0) {
                int consonants = 0;
                bool isConsonant = true;
                for (char ch : word) {
                    if (isalpha(ch)) {
                        if (!isvowel(ch)) {
                            consonants++;
                            isConsonant = true;
                        } else {
                            isConsonant = false;
                        }
                    }
                }
                if (consonants == n && isConsonant) {
                    result.push_back(word);
                }
                word = "";
            }
        }
    }
    if (word.length() > 0) {
        int consonants = 0;
        bool isConsonant = true;
        for (char ch : word) {
            if (isalpha(ch)) {
                if (!isvowel(ch)) {
                    consonants++;
                    isConsonant = true;
                } else {
                    isConsonant = false;
                }
            }
        }
        if (consonants == n && isConsonant) {
            result.push_back(word);
        }
    }
    return result;
}

bool isvowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}