string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(tolower(word[i]))) return &word[i];
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) break;
            if (isvowel(tolower(word[j]))) return &word[j + 1];
        }
    }
    return "";
}