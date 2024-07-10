string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int j;
            for (j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j]) && !isconsonant(word[j]))
                    break;
            }
            if (j < i - 1)
                return string(1, word[i]);
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