char get_closest_vowel(const string& word) {
    const string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 2; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return word[i];
        }
    }
    return '\0'; // Return null character if no vowel found
}