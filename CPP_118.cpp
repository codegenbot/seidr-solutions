string get_closest_vowel(string word) {
    for (int i = word.size() - 2; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i-1]) && !isalpha(word[i+1])) return tolower(word[i]);
    }
    return "";
}