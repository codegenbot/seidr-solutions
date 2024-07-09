string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (!isvowel(toupper(word[i]))) break;
        return string(1, topper(word[i]));
    }
    return "";
}