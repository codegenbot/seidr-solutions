string get_closest_vowel(string word) {
    int i = word.length() - 1;
    while (i >= 0 && !isVowel(word[i])) {
        i--;
    }
    if (i < 0) return "";
    for (int j = i; j > 0 && !isVowel(word[j-1]); j--) {
        if (!isConsonant(word[j-1])) return "";
    }
    return word.substr(j-1, 1);
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c) && (c >= 'b' && c <= 'z');
}