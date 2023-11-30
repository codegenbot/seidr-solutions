vector<string> select_words(string s, int n) {
    vector<string> result;
    if (s.empty()) {
        return result;
    }
    
    string word;
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
    for (int i = 0; i < word.length(); i++) {
        if (!is_vowel(word[i])) {
            count++;
        }
    }
    return count;
}

bool is_vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}