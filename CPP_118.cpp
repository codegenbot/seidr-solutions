string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (strchr("aeiouAEIOU", tolower(word[i])) != NULL) {
            return string(1, word[i]);
        }
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) break;
            if (strchr("aeiouAEIOU", tolower(word[j])) == NULL) continue;
            return string(1, word[j]);
        }
    }
    return "";
}