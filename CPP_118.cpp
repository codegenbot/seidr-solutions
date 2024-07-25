Here is the completed code:

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 2; i >= 0; --i) {
        if (!isVowel(word[i])) continue;
        if (isConsonant(word[i-1]) && isConsonant(word[i-2]))
            return string(1, word[i]);
    }
    return "";
}

bool isVowel(char c) { return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); }
bool isConsonant(char c) { return !isVowel(c); }