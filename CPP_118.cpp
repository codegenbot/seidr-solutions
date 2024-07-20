Here is the completed code:

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0 && !isvowel(word[i]); --i);
    for (int i = i + 1; i < n && !isconsonant(word[i]); ++i);
    if (i < n && isvowel(word[i])) {
        return &word[i] - &word[0] + 1;
    }
    return "";
}

bool isvowel(char c) { return "aeiouAEIOU".find(c) != string::npos; }

bool isconsonant(char c) { return !isvowel(c); }