string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 2; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        char prev = tolower(word[i-1]);
        char curr = tolower(word[i]);
        if (prev != 'a' && prev != 'e' && prev != 'i' && prev != 'o' && prev != 'u') {
            if (ispunct(curr) || isdigit(curr)) continue;
            return string(1, toupper(curr));
        }
    }
    return "";
}