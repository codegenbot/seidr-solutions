string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n - 2; i++) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i + 1]) || !isalpha(word[i + 2])) continue;
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
            word[i] == 'U') {
            if (i + 2 < n && isalpha(word[i + 1]) && !isalpha(word[i + 2]))
                return string(1, word[i]);
        }
    }
    return "";
}