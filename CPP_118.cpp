string get_closest_vowel(string word) {
    int i = word.length() - 1;
    while (i > 0 && !isVowel(word[i])) {
        i--;
    }
    if (i == 0) return "";
    int j = i - 1;
    while (j >= 0 && !isConsonant(word[j])) {
        j--;
    }
    if (j < 0) return "";
    int k = j - 1;
    while (k >= 0 && !isVowel(word[k])) {
        k--;
    }
    if (k < 0 || isVowel(word[k])) return word.substr(k + 1, i - k - 1);
    return "";
}

bool isConsonant(char c) {
    return !isVowel(c);
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}