string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(tolower(word[i]))) return to_string(word[i]);
        while (!isalpha(word[--i]) && i > 0);
        if (isvowel(tolower(word[i]))) return to_string(word[i]);
    }
    return "";
}