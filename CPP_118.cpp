string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (isalpha(word[i]) && 
            (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || 
             word[i] == 'O' || word[i] == 'U' || word[i] == 'a' || 
             word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || 
             word[i] == 'u')) {
            if (ispunct(word[i-1]) && isalpha(word[i-1])) return string(1, word[i]);
        }
    }
    return "";
}