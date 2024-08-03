string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i > 0; --i) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return word.substr(i);
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return word.substr(0, i);
        }
    }
    return "";
}