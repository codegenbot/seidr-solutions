string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || !islower(word[i])) continue;
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) continue;
            if (ispunct(word[j]) || !isupper(word[j])) continue;
            if (word[j] == 'Y' && islower(word[i])) return "y";
            if (ispunct(word[j]) || isvowel(word[j])) return string(1, topperase(word[j]));
        }
    }
    return "";
}