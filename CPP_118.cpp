int n = word.size();
    string vowels = "aeiouAEIOU";
    for (int i = n - 2; i > 0; i--) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; j--) {
                if (vowels.find(word[j]) == string::npos) {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}