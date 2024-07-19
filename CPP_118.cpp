string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return &word[i];
        while (--i >= 0 && !isalpha(word[i])) {}
        if (isvowel(word[i])) return &word[i] + 1;
    }
    return "";
}