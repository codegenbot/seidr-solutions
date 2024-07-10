string get_closest_vowel(string word) {
    for (int i = word.length() - 3; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        if (!isvowel(tolower(word[i]))) continue;
        int j = i - 1;
        while (j >= 0 && !isalpha(word[j]) && !isvowel(tolower(word[j])))
            j--;
        if (j >= 0) return tolower(word.substr(j + 1, i - j - 1));
    }
    return "";
}