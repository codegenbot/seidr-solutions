string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) {
            for (int j = i - 1; j >= 0; --j) {
                if (!isalpha(word[j])) break;
                if (!isvowel(word[j])) continue;
                return string(1, tolower(word[j]));
            }
            for (int j = i + 1; j < n; ++j) {
                if (!isalpha(word[j])) break;
                if (isvowel(word[j])) {
                    return string(1, tolower(word[j]));
                }
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}