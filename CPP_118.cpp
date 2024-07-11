string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (word[i] == 'Y' || word[i] == 'y') continue;
        if (ispunct(word[i-1])) continue;
        if (word[i] == 'Y' || word[i] == 'y') continue;
        if (isvowel(word[i])) return string(1, tolower(word[i]));
    }
    return "";
}