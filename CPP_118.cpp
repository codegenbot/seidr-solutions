string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (isvowel(word[i])) {
            bool found = true;
            for (int j = i + 2; j < n; ++j) {
                if (!isconsonant(word[j])) {
                    found = false;
                    break;
                }
            }
            if (found) return string(1, word[i]);
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