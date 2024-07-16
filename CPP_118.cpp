int n = word.size();
    for (int i = n - 2; i > 0; --i) {
        if (word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u' &&
            word[i - 1] != 'a' && word[i - 1] != 'e' && word[i - 1] != 'i' && word[i - 1] != 'o' && word[i - 1] != 'u' &&
            word[i + 1] != 'a' && word[i + 1] != 'e' && word[i + 1] != 'i' && word[i + 1] != 'o' && word[i + 1] != 'u') {
            if (word[i] == 'y') {
                return "u";
            } else if (word[i] != 'y') {
                if (word[i] >= 'A' && word[i] <= 'Z') {
                    return string(1, word[i] - 'A' + 'a');
                } else {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}