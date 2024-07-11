Here is the completed code:

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 2; i >= 0; --i) {
        if (!isvowel(word[i])) continue;
        for (int j = i + 1; j < n && !isvowel(word[j]); ++j) {
            if (!isconsonant(word[j])) break;
        }
        if (j != n) return string(1, word[j]);
    }
    return "";
}

bool isvowel(char c) { return "aeiouAEIOU".find(c) != string::npos; }

bool isconsonant(char c) { return !isvowel(c); }