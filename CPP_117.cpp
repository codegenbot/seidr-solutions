vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            if (countVowels(word) == 0 || countConsonants(word) == n) {
                if (countVowels(word) == 0) {
                    result.push_back(word);
                }
                word = "";
            }
        }
    }
    if (countVowels(word) == 0 || countConsonants(word) == n) {
        if (countVowels(word) == 0) {
            result.push_back(word);
        }
    }
    return result;
}

int countVowels(string s) {
    int count = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int countConsonants(string s) {
    int count = 0;
    for (char c : s) {
        if (!isVowel(c)) {
            count++;
        }
    }
    return count;
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}