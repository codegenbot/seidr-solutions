string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isvowel(word[i])) continue;
        for (int j = i - 1; j >= 0; --j) {
            if (!isconsonant(word[j])) break;
            return string(1, word[i]);
        }
    }
    return "";
}

bool isvowel(char c) { return "aeiouAEIOU".find(c) != string::npos; }

bool isconsonant(char c) { return !isvowel(c); }