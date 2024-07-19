string get_closest_vowel(string word) {
    for (int i = word.length() - 2; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i-1]) && !isalpha(word[i-2])) return tolower(word[i]);
    }
    return "";
}