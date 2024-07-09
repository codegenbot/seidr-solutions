string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return string(1, word[i]);
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            for (int j = i + 1; j < n; ++j) {
                if (!isalpha(word[j])) continue;
                if (ispunct(word[j]) || isdigit(word[j])) continue;
                char d = tolower(word[j]);
                if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u') {
                    return string(1, word[j]);
                }
            }
        }
    }
    return "";
}