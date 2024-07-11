string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) continue;
        if (word[i] == 'Y' && isupper(word[i])) word[i] = 'y';
        if (isvowel(word[i])) return &word[i];
    }
    return "";
}