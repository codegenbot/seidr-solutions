string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || !islower(word[i])) continue;
        if ("aeiou".find(tolower(word[i])) != string::npos) return tolower(word[i]);
    }
    return "";
}