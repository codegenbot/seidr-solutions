string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && (word[i-1] < 'B' || word[i-1] > 'Z')) continue;
        if (word[i] == 'y' && (word[i-1] < 'b' || word[i-1] > 'z')) continue;
        if (isvowel(word[i])) return string(1, tolower(word[i]));
    }
    return "";
}