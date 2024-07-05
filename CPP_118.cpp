bool is_vowel(char c) {
    string vowels = "aeiouAEIOU";
    return vowels.find(c) != string::npos;
}

string get_closest_vowel(string word) {
    for (int i = word.size() - 2; i > 0; --i) {
        if (!is_vowel(word[i]) && is_vowel(word[i - 1]) && !is_vowel(word[i + 1])) {
            return string(1, word[i - 1]);
        }
    }
    return "";
}