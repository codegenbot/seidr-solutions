string vowels = "aeiouAEIOU";
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos && !isupper(word[i])) {
            return string(1, word[i]);
        }
    }
    return "";
}