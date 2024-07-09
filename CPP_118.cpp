string get_closest_vowel(string word) {
    for (int i = word.length() - 3; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || !islower(word[i])) continue;
        for (int j = i + 1; j < word.length(); ++j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || !islower(word[j])) break;
            if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || 
                word[j] == 'o' || word[j] == 'u') {
                return string(1, topper(word[j]));
            }
        }
    }
    return "";
}