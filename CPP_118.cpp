string get_closest_vowel(const string& word) {
    string vowels = "AEIOUaeiou";

    for (int i = word.length() - 4; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return string(1, word[i]);
        }
    }

    return "";
}