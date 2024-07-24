string vowels = "AEIOUaeiou";
    string consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";

    for (int i = word.length() - 2; i > 0; --i) {
        if (consonants.find(word[i]) != string::npos && vowels.find(word[i + 1]) != string::npos && consonants.find(word[i - 1]) != string::npos) {
            return string(1, word[i + 1]);
        }
    }

    return "";
}