string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 2; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            for (int j = i - 1; j > 0; --j) {
                if (!isVowel(word[j])) {
                    return (word[i]);
                }
            }
        }
    }
    return "";
}