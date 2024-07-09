string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n - 2; ++i) {
        if (!isvowel(word[i]) && !isvowel(word[i+1]) && isvowel(word[i+2])) {
            return string(1, tolower(word[i+2]));
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}