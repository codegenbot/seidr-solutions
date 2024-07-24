string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (word[i] == 'Y' || word[i] == 'y') continue;
        if (strchr("AEIOUaeiou", word[i])) {
            return word.substr(left, i - left);
        }
        left = i + 1;
    }
    return "";
}