string vowels = "aeiouAEIOU";
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isVowel(word[i - 1]) && !isVowel(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return "";
}