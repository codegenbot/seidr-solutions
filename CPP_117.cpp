vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (count_consonants(word) == n) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    if (count_consonants(word) == n) {
        result.push_back(word);
    }
    return result;
}

int count_consonants(string word) {
    int count = 0;
    for (char c : word) {
        if (is_consonant(c)) {
            count++;
        }
    }
    return count;
}

bool is_consonant(char c) {
    c = tolower(c);
    return (c >= 'b' && c <= 'd') || (c >= 'f' && c <= 'h') || (c >= 'j' && c <= 'n') || (c >= 'p' && c <= 't') || (c >= 'v' && c <= 'z');
}