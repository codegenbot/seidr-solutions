string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1])) continue;
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || isdigit(word[j])) break;
            if (word[j] == 'Y' && j > 0 && isupper(word[j-1])) break;
            if (ispunct(word[j]) || isdigit(word[j+1])) continue;
            if (isvowel(word[j])) return word.substr(j, 1);
        }
    }
    return "";
}