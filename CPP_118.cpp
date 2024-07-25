string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1])) continue;
        if (ispunct(word[0]) || isdigit(word[0])) return "";
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || isdigit(word[j])) break;
            if (word[j] == 'Y' && j < n-2 && isupper(word[j+1])) continue;
        }
        for (; j >= 0; --j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || isdigit(word[j])) return "";
            if (word[j] == 'Y' && j < n-2 && isupper(word[j+1])) continue;
        }
        if (ispunct(word[i])) return "";
        for (; i >= 0; --i) {
            if (!isalpha(word[i])) break;
            if (ispunct(word[i]) || isdigit(word[i])) return "";
        }
        return word.substr(j, i-j);
    }
    return "";
}