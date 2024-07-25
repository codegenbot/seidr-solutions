string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) {
            ++left;
        } else if (!strncasecmp(&word[i], "aeiouAEIOU", 6)) {
            return &word[i];
        }
    }
    return "";
}