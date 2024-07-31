string vowels = "AEIOUaeiou";
    string consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
    for (int i = word.size() - 2; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            for (int j = i - 1; j > 0; --j) {
                if (consonants.find(word[j]) != string::npos) {
                    for (int k = j - 1; k > 0; --k) {
                        if (vowels.find(word[k]) != string::npos) {
                            return string(1, word[k]);
                        }
                    }
                    return "";
                }
            }
            return "";
        }
    }
    return "";
}