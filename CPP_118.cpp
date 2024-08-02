string get_closest_vowel(string word) {
    int i = word.size() - 1;
    while (i > 0 && !isvowel(word[i])) {
        i--;
    }
    if (i == 0 || !isvowel(word[i]))
        return "";
    for (; i >= 0; i--) {
        if (isvowel(word[i])) {
            int j = i - 1;
            while (j > 0 && !isconsonant(word[j]))
                j--;
            if (j == 0 || isconsonant(word[j]))
                return word.substr(i, 1);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c) {
    c = tolower(c);
    return !isvowel(c);
}