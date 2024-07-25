string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            for (int j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j]) && !isconsonant(word, j, i)) break;
                else if (!isvowel(word[j])) continue;
                else return string(1, word[i]);
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isconsonant(string word, int start, int end) {
    for (int i = start; i < end; ++i) {
        if (!isvowel(word[i])) return true;
    }
    return false;
}