string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int j = i - 1;
            while (j >= 0 && !isvowel(word[j]))
                j--;
            if (j >= 0)
                return string(1, word[j]);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}