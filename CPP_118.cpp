string get_closest_vowel(string word) {
    int i = word.length() - 1;
    while (i >= 0 && !isVowel(word[i])) {
        i--;
    }
    if (i < 0) return "";
    for (int j = i; j > 0 && !isVowel(word[j-1]); j--) {
        if (!isConsonant(word[j-1])) break;
    }
    if (j == 0) return "";
    while (i > j && !isVowel(word[i])) i--;
    return word.substr(j, i-j+1);
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    for (char i = 'a'; i <= 'z'; i++) {
        if (c == i) return false;
    }
    return true;
}