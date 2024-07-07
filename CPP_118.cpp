string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; i--) {
        if (!isalnum(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) left = i + 1;
        else if (word[i] == 'Y' && i > 0) continue;
        else if (vowel(word[i])) return string(1, word[i]);
    }
    return "";
}

bool vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
           || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}