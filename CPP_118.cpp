string get_closest_vowel(string word) {
    int i = word.size() - 1;
    while (i > 0 && !isVowel(word[i])) {
        --i;
    }
    if (i == 0) return "";
    for (; i > 0 && !isVowel(word[i-1]); --i) {}
    return string(1, tolower(word[i]));
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}