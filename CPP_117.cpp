int count_consonants(string word) {
    int count = 0;
    for (char c : word) {
        if (isalpha(c) && !isvowel(tolower(c))) {
            count++;
        }
    }
    return count;
}

bool issame(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

bool isvowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

vector<string> select_words(string s, int n);

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    for (char c : s) {
        if (c == ' ') {
            if (count_consonants(word) == n && issame(word, "hello")) {
                result.push_back(word);
            }
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty() && count_consonants(word) == n && issame(word, "hello")) {
        result.push_back(word);
    }
    return result;
}