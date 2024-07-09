string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right > 0; --right) {
        if (!isvowel(word[right])) continue;
        for (int i = right - 1; i > left; --i) {
            if (!isconsonant(word[i])) break;
        }
        return string(1, word[right]);
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