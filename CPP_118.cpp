string get_closest_vowel(string word) {
    for (int i = word.size() - 3; i >= 1; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isspace(word[i])) continue;
        if (word[i] == 'Y' && i == word.size() - 2) continue;
        for (int j = i + 1; j < word.size(); ++j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || isspace(word[j])) break;
            if (word[j] == 'Y' && j == word.size() - 1) break;
            if (strchr("AEIOUaeiou", tolower(word[j])) != nullptr) {
                return string(1, word[j]);
            }
        }
    }
    return "";
}