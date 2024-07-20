string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && word[i-1] >= 'A' && word[i-1] <= 'Z') continue;
        if (word[i] == 'y' && word[i-1] >= 'a' && word[i-1] <= 'z') continue;
        if (ispunct(word[i-1]) || isdigit(word[i-1])) return "";
        if (isalpha(word[i-1])) return ((word[i] >= 'A' && word[i] <= 'Z') ? "U" : "u");
    }
    return "";
}