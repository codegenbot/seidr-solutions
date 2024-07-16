string vowels = "aeiouAEIOU";
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int n = word.length();
    for (int i = n - 2; i > 0; i--) {
        if (consonants.find(word[i]) != string::npos && vowels.find(word[i - 1]) != string::npos && consonants.find(word[i - 2]) != string::npos) {
            return string(1, word[i - 1]);
        }
    }
    return "";
}