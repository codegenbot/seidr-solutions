string vowels = "aeiouAEIOU";
    int rightConsonantIndex = -1;
    for (int i = word.size() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            return string(1, word[i]);
        } else if (isalpha(word[i])) {
            rightConsonantIndex = i;
        }
    }
    return "";
}