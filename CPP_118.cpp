string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
            int left = i;
            while (left > 0 && !isVowel(word[left - 1])) {
                --left;
            }
            if (left < i) {
                return string(1, tolower(word[i]));
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}