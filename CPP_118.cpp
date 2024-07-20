string get_closest_vowel(string word) {
    for (int i = word.size() - 3; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || !isupper(word[i])) continue;
        int left = i - 1;
        while (left >= 0 && !isalpha(word[left])) --left;
        while (left >= 0 && isalpha(word[left])) --left;
        if (left < 0) return tolower((char)word[i]);
    }
    return "";
}