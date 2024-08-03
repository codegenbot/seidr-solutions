vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    bool isConsonant = false;

    for (char c : s) {
        if (c == ' ') {
            if (isConsonant) {
                if (word.length() == n) {
                    result.push_back(word);
                }
                isConsonant = false;
                word.clear();
            }
        } else {
            if (!isSpace(c)) {
                isConsonant = true;
                word += tolower(c);
            }
        }
    }

    if (isConsonant && word.length() == n) {
        result.push_back(word);
    }

    return result;
}

bool isSpace(char c) {
    return c == ' ';
}