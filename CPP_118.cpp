string get_closest_vowel(string word) {
    string vowels = "AEIOUaeiou";
    int n = word.length();
    for (int i = n - 3; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            if (!isalpha(word[i - 1]) || !isalpha(word[i + 1])) {
                continue;
            }
            return string(1, word[i]);
        }
    }
    return "";
}