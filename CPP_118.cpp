string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 2; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        if (!isvowel(toupper(word[i]))) continue;
        for (int j = i + 1; j < n; ++j) {
            if (!isalpha(word[j])) break;
            if (!isconsonant(toupper(word[j]))) return to_string(word[i]);
        }
    }
    return "";
}