string vowels = "AEIOUaeiou";
    int i = word.length() - 2;
    while (i > 0) {
        if (vowels.find(word[i]) != string::npos) {
            return string(1, word[i]);
        } else if (isalpha(word[i])) {
            i--;
        } else {
            i = -1;
        }
    }
    return "";
}