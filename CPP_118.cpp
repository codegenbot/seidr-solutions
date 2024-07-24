string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(tolower(word[i]))) return to_string(word[i]);
        while (!isalpha(word[i-1]) && i > 1) --i;
        if (isvowel(tolower(word[i-1]))) return to_string(word[i-1]);
    }
    return "";
}