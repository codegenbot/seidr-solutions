string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (isalpha(word[i]) && (word[i] == 'a' || word[i] == 'e' || 
                word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
                tolower(word[i]) == 'y')) {
            return string(1, word[i]);
        }
    }
    return "";
}