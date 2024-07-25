string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isalpha(word[right])) continue;
        if (ispunct(word[right]) || isdigit(word[right])) continue;
        if (ispunct(word[right-1]) || isdigit(word[right-1])) return string(1, tolower(word[right]));
        if (word[right] == 'Y' && right > 0 && isalpha(word[right-1])) return string(1, tolower(word[right]));
        for (int i = left; i < right; ++i) {
            if (!isalpha(word[i])) continue;
            if (ispunct(word[i]) || isdigit(word[i])) break;
            if (ispunct(word[i-1]) || isdigit(word[i-1])) return string(1, tolower(word[i]));
        }
    }
    return "";
}