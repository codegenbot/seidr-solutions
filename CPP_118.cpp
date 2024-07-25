string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (word[i] == 'Y' || word[i] == 'y') continue;
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) continue;
            if (ispunct(word[j]) || isdigit(word[j])) continue;
            if (word[j] == 'Y' || word[j] == 'y') continue;
            if ("AEIOUaeiou".find(toupper(word[i])) != string::npos) {
                return word.substr(j, i - j);
            }
        }
    }
    return "";
}