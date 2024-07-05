auto is_vowel = [](char c) {
        string vowels = "aeiouAEIOU";
        return vowels.find(c) != string::npos;
    };

    int n = word.size();
    if (n < 3) return "";

    for (int i = n - 2; i > 0; --i) {
        if (is_vowel(word[i]) && !is_vowel(word[i-1]) && !is_vowel(word[i+1])) {
            return string(1, word[i]);
        }
    }
    return "";
}