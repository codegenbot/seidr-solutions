string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = 0; i < n - 2; ++i) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i + 1]) || !isalpha(word[i + 2])) continue;
        if (word[i] == 'y' && isvowel(word[i + 1])) return string(1, word[i + 1]);
    }
    for (int i = n - 3; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i - 1]) || !isalpha(word[i - 2])) continue;
        if (word[i] == 'y' && isvowel(word[i - 1])) return string(1, word[i - 1]);
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}