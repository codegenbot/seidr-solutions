string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1]) && islower(word[i-2]))
            return string(1, toupper(word[i]));
        if (ispunct(word[i-1]) || isdigit(word[i-1]))
            return string(1, tolower(word[i]));
    }
    return "";
}