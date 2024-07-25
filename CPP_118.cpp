string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isvowel(word[i])) {
            continue;
        }
        bool found_consonants = true;
        for (int j = i - 1; j >= 0; --j) {
            if (isconsonant(word[j])) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool isconsonant(char c) {
    return !isvowel(c);
}