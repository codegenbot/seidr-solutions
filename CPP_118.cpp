string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    int n = word.length();
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; --j) {
                if (vowels.find(word[j]) == string::npos) {
                    for (int k = i + 1; k < n - 1; ++k) {
                        if (vowels.find(word[k]) == string::npos) {
                            return string(1, word[i]);
                        }
                    }
                }
            }
        }
    }
    return "";
}