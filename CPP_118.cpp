string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) {
            result = to_string(word[i]);
            break;
        }
    }
    return result;
}