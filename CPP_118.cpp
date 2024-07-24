string vowels = "aeiouAEIOU";
    int n = word.length();
    for (int i = n - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos && 
            !isupper(word[i]) && 
            !isupper(word[i - 1]) && 
            isupper(word[i - 2])) {
            return string(1, word[i]);
        }
    }
    return "";
}