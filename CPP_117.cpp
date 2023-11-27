bool isVowel(char c);

vector<string> select_words(string s, int n);

bool issame(vector<string>& a, const vector<string>& b);

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            int consonantCount = 0;
            for (int j = 0; j < word.length(); j++) {
                if (isalpha(word[j]) && !isVowel(word[j])) {
                    consonantCount++;
                }
            }
            if (consonantCount == n) {
                result.push_back(word);
            }
            word = "";
        }
    }
    int consonantCount = 0;
    for (int j = 0; j < word.length(); j++) {
        if (isalpha(word[j]) && !isVowel(word[j])) {
            consonantCount++;
        }
    }
    if (consonantCount == n) {
        result.push_back(word);
    }
    return result;
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool issame(vector<string>& a, const vector<string>& b) {
    // Compare the vectors
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}