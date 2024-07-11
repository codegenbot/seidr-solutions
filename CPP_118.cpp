string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            for (int j = i + 1; j < word.size(); ++j) {
                if ((word[j] >= 'a' && word[j] <= 'z') || (word[j] >= 'A' && word[j] <= 'Z')) {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}