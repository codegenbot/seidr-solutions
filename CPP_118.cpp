string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int left = 0;
            while (left < i && !isconsonant(word[left]))
                ++left;
            return word.substr(left, i - left);
        }
    }
    return "";
}

bool isconsonant(char c) { return !isvowel(c); }

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}