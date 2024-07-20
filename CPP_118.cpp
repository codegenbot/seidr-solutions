string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (ispunct(word[i])) {
            break;
        }
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u') {
            return string(1, topper(word[i]));
        }
    }
    return "";
}