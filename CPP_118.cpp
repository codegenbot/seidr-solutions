string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (isvowel(word[i])) {
            for (int j = i + 2; j < n; ++j) {
                if (!iscnsonant(word[j])) {
                    return word.substr(i, 1);
                }
            }
        }
    }
    return "";
}

bool iscnsonant(char c) {
    return !isvowel(c) && (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}