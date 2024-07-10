string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (isvowel(word[i])) {
            bool found_consonant = false;
            for (int j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j])) {
                    found_consonant = true;
                    break;
                }
            }
            if (found_consonant) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}