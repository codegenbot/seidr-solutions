auto is_vowel = [](char ch) {
        string vowels = "aeiouAEIOU";
        return vowels.find(ch) != string::npos;
    };

    for (int i = word.size() - 2; i > 0; --i) {
        if (is_vowel(word[i]) && !is_vowel(word[i - 1]) && !is_vowel(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}