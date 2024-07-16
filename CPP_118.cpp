string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    reverse(word.begin(), word.end());
    for (size_t i = 1; i < word.length() - 1; ++i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}