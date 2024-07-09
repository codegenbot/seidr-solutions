string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) continue;
        if (strchr("aeiouAEIOU", tolower(word[i]))) {
            int j = i + 1;
            while (j < word.size() && !isalpha(word[j])) ++j;
            int k = i - 1;
            while (k >= 0 && !isalpha(word[k])) --k;
            if (k >= 0 && isalpha(word[k]) && j > k) {
                return string(1, tolower(word[i]));
            }
        }
    }
    return "";
}