string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i >= 0 && !isvowel(word[i]); i--) {
        if (i > 0 && !isconsonant(word[i - 1]))
            return string(1, tolower(word[i]));
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool isconsonant(char c) {
    return (!isvowel(c));
}