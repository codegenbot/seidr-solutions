string vowels = "aeiouAEIOU";
    for (int i = word.length() - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; j--) {
                if (vowels.find(word[j]) == string::npos) {
                    return word.substr(i, 1);
                }
            }
        }
    }
    return "";
}