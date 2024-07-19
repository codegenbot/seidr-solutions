int n = word.length();
    for (int i = n - 2; i > 0; --i) {
        if (isalpha(word[i]) && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            char c = tolower(word[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                return string(1, word[i]);
            }
        }
    }
    return "";
}