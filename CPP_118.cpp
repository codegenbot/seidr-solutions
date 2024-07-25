string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i < n - 1 && !isalpha(word[i + 1])) continue;
        if (ispunct(word[0]) || isdigit(word[0])) return "";
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) continue;
            if (ispunct(word[j]) || isdigit(word[j])) break;
            if (word[j] == 'Y' && j > 0 && !isalpha(word[j - 1])) break;
        }
        for (; j < i; ++j) {
            if (!isalpha(word[j])) continue;
            if (ispunct(word[j]) || isdigit(word[j])) return "";
            if (word[j] == 'Y' && j < n - 1 && !isalpha(word[j + 1])) return "";
        }
        for (; i > j; --i) {
            if (!isalpha(word[i])) continue;
            if (ispunct(word[i]) || isdigit(word[i])) break;
            if (word[i] == 'Y' && i < n - 1 && !isalpha(word[i + 1])) break;
        }
        return word.substr(j, i - j);
    }
    return "";
}