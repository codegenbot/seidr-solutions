string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1]) && islower(word[i-2]))
            return "Y";
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (isvowel(word[i])) {
            for (int j = i - 1; j >= 0; --j) {
                if (!isalpha(word[j])) break;
                if (ispunct(word[j]) || isdigit(word[j])) break;
                if (word[j] == 'Y' && j > 1 && isupper(word[j-1]) && islower(word[j-2]))
                    return "Y";
            }
            for (int j = i + 1; j < n; ++j) {
                if (!isalpha(word[j])) break;
                if (ispunct(word[j]) || isdigit(word[j])) break;
                if (isvowel(word[j])) return tolower((char)word[j]);
            }
        }
    }
    return "";
}