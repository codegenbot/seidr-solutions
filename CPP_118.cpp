string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int left = i;
            while (left > 0 && !isconsonant(word[left-1]))
                left--;
            return word.substr(left, i-left);
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