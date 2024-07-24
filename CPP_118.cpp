string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 2; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i-1]) && isvowel(word[i])) {
            result = to_string(word[i]);
            break;
        }
    }
    return result;
}