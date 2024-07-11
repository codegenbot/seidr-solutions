string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' && i > 1 && isupper(word[i-1]))
            return "U";
        if (ispunct(word[i]) || isdigit(word[i])) break;
        if (isvowel(word[i])) return word.substr(i);
    }
    return "";
}