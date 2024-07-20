string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) {
            ++left;
        } else if (!isvowel(tolower(word[i]))) {
            break;
        }
    }
    for (int i = left; i < word.size(); ++i) {
        if (isvowel(tolower(word[i]))) {
            return string(1, tolower(word[i]));
        }
    }
    return "";
}