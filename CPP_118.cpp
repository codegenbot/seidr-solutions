string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) continue;
        if (vowel(word[i])) return string(1, tolower(word[i]));
    }
    return "";
}

bool vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}