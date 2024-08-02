string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || !isupper(word[i])) continue;
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) continue;
            if (ispunct(word[j]) || !islower(word[j])) break;
            if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' ||
                word[j] == 'o' || word[j] == 'u') {
                return string(1, topper(word[j]));
            }
        }
    }
    return "";
}