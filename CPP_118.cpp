string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u') {
            int left = i + 1;
            while (left < word.length() && !isvowel(word[left])) {
                ++left;
            }
            if (left < word.length()) {
                return string(1, word[left]);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}