string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1]) && islower(word[i-2]))
            return "Y";
        if (ispunct(word[i-1]) || isdigit(word[i-1])) continue;
        if (isalpha(word[i-1])) continue;
        if (word[i] == 'U' || word[i] == 'E' || word[i] == 'A' || word[i] == 'I' || word[i] == 'O')
            return string(1, topper(word[i]));
    }
    return "";
}