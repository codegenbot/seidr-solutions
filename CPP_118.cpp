string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (isvowel(word[i])) return string(1, word[i]);
        while (!ispunct(word[i-1]) && i-- > 0);
        if (isvowel(word[i])) return string(1, word[i]);
    }
    return "";
}