string vowels = "aeiouAEIOU";
    string result = "";
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            result = word[i];
            break;
        }
    }
    return result;
}