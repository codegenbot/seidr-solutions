string get_closest_vowel(string word) {
    for (int i = word.length() - 2; i >= 1; --i) {
        if (!isupper(word[i]) && !islower(word[i]))
            continue;
        bool foundVowel = false;
        for (int j = i + 1; j < word.length(); ++j) {
            if (!isupper(word[j]) && !islower(word[j]))
                break;
            if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' ||
                word[j] == 'o' || word[j] == 'u' || word[j] == 'A' ||
                word[j] == 'E' || word[j] == 'I' || word[j] == 'O' ||
                word[j] == 'U')
                return string(1, word[j]);
        }
    }
    return "";
}