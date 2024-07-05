auto is_vowel = [](char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    };

    for (int i = word.size() - 2; i > 0; --i) {
        if (!is_vowel(word[i]) && is_vowel(word[i-1]) && !is_vowel(word[i-2])) {
            return string(1, word[i-1]);
        }
    }
    return "";
}