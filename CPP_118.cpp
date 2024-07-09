string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            return word.substr(i, 1);
        }
    }
    return "";
}