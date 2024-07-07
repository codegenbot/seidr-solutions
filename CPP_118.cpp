string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (strchr("aeiouAEIOU", tolower(word[i])) != nullptr)
            return string(1, word[i]);
    }
    return "";
}