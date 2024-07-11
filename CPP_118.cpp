string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 3; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !vowels.find(word[i - 1]) && !vowels.find(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}