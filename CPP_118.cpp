string get_closest_vowel(string word) {
    for (int i = 0; i < word.size(); i++) {
        if (!isvowel(word[i])) continue;
        for (int j = i - 1; j >= 0; j--) {
            if (iscnsonant(word[j])) break;
            if (iscnsonant(word[j-1])) break;
            if (j == 0) return word.substr(0, i);
        }
    }
    return "";
}

bool isvowel(char c) { return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); }

bool iscnsonant(char c) { return (!isvowel(c)); }