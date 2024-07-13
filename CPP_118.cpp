string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; i--) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return string(1, tolower(word[i]));
        left = i + 1;
    }
    return "";
}