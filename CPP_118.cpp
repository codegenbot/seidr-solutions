string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i < n - 1 && !isalpha(word[i - 1])) continue;
        if (word[i] == 'y' && i < n - 1 && !isalpha(word[i - 1])) continue;
        for (int j = i - 1; j > 0; --j) {
            if (!isalpha(word[j])) continue;
            if (ispunct(word[j]) || isdigit(word[j])) break;
            if (word[j] == 'Y' && j < i && !isalpha(word[j + 1])) break;
            if (word[j] == 'y' && j < i && !isalpha(word[j + 1])) break;
            return tolower((char)word[i]);
        }
    }
    return "";
}