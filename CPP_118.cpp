string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; i--) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            int j = i - 1;
            while (j >= 0 && !isVowel(word[j])) {
                j--;
            }
            if (j >= 0) {
                return string(1, word[i]);
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}