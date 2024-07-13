string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i < n - 1 && !isalpha(word[i-1])) continue;
        if (word[i] == 'y' && i < n - 1 && !isalpha(word[i-1])) continue;
        if (ispunct(word[i-1]) || isdigit(word[i-1])) continue;
        return word.substr(i, 1);
    }
    return "";
}