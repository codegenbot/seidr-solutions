string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 2; i > 0; i--) {
        if (isalpha(word[i])) {
            char c = tolower(word[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                return string(1, word[i]);
            }
        }
    }
    return "";
}