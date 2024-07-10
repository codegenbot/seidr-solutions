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
            if (word[j] == 'Y' && j > 0 && isupper(word[j-1])) continue;
        }
        for (; j < i; ++j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || isdigit(word[j])) break;
        }
        if (word[i] == 'Y' && word[j] == 'U') return "U";
        if (word[i] == 'y' && word[j] == 'u') return "u";
        for (char c = 'a'; c <= 'z'; ++c) {
            if (word[i] == c || word[j] == c) return string(1, c);
        }
    }
    return "";
}