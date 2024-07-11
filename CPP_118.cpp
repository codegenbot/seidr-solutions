string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0 && (!isVowel(word[i])); i--) {
        if (i < n - 1 && !isVowel(word[i + 1]))
            return string(1, tolower(word[i]));
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}