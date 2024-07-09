string vowels = "AEIOUaeiou";
    int rightConsonantIdx = -1;
    for (int i = word.length() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            return word.substr(i, 1);
        } else if ('a' <= word[i] && word[i] <= 'z' || 'A' <= word[i] && word[i] <= 'Z') {
            rightConsonantIdx = i;
        }
    }
    return "";
}