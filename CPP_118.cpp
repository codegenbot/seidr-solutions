string vowels = "AEIOUaeiou";
    int n = word.length();
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            if (!isalpha(word[i - 1]) || !isalpha(word[i + 1])) {
                continue;
            }
            return string(1, word[i]);
        }
    }
    return "";
}