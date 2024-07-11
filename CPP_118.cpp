string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (ispunct(word[i]) || !isalpha(word[i])) continue;
        if (word[i] == 'Y' && i > 0 && isupper(word[i-1])) continue;
        if (vowel(word[i]))
            return string(1, topper(word[i]));
    }
    return "";
}

bool vowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'
           || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char topper(char c) {
    return (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c;
}