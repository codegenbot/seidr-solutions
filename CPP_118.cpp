string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (isvowel(word[i])) {
            for (int j = i + 1; j < n && !isvowel(word[j]); ++j) {
                if (j == n - 1 || !isconsonant(word[j])) return "";
            }
            return word.substr(i, 1);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c) {
    c = tolower(c);
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}