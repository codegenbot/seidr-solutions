string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || !isupper(word[i]) && !islower(word[i])) continue;
        for (int j = i + 1; j < n; ++j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || !isupper(word[j]) && !islower(word[j])) break;
            if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || 
                word[j] == 'o' || word[j] == 'u' || word[j] == 'A' || word[j] == 'E' || 
                word[j] == 'I' || word[j] == 'O' || word[j] == 'U') {
                return string(1, word[j]);
            }
        }
    }
    return "";
}