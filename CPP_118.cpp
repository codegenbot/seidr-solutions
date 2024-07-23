string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            for (int j = i - 1; j >= 0; --j) {
                if (!isVowel(word[j])) {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}