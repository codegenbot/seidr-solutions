string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 0 && isupper(word[i-1])) continue;
        for (int j = i + 1; j < n; ++j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || isdigit(word[j])) break;
            if (word[j] == 'Y' && j > 0 && isupper(word[j-1])) break;
        }
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) continue;
            if (ispunct(word[j]) || isdigit(word[j])) continue;
            if (word[j] == 'Y' && j < n-1 && isupper(word[j+1])) continue;
            return string(1, tolower(word[j]));
        }
    }
    return "";
}