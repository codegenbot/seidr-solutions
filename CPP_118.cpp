string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int j = i;
            while (j > 0 && !isconsonant(word[j-1]))
                j--;
            if (j > 0)
                return string(1, word[j-1]);
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
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}