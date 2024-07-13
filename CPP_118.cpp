string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return word.substr(i, 1);
        while (!isalpha(word[i - 1])) --i;
        if (isconsonant(word[i - 1])) return word.substr(i - 1, 1);
    }
    return "";
}