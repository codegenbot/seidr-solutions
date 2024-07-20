char get_closest_vowel(string word){
    for (int i = word.size() - 2; i >= 1; --i) {
        char c = word[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            (word[i - 1] != 'a' && word[i - 1] != 'e' && word[i - 1] != 'i' && word[i - 1] != 'o' && word[i - 1] != 'u') &&
            (word[i + 1] != 'a' && word[i + 1] != 'e' && word[i + 1] != 'i' && word[i + 1] != 'o' && word[i + 1] != 'u')) {
            return c;
        }
    }
    return '\0';
}