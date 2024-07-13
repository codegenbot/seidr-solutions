string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int left = i - 1;
            while (left >= 0 && !isconsonant(word[left]))
                left--;
            if (left >= 0)
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