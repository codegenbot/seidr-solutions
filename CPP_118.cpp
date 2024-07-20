string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || !islower(word[i])) continue;
        if (word[i] == 'y' && (word[i-1] < 'e' || word[i-1] > 'o')) continue;
        for (int j = i - 1; j >= 0; --j) {
            if (!isalpha(word[j])) break;
            if (ispunct(word[j]) || !islower(word[j])) break;
            if (word[j] == 'y' && (word[j-1] < 'e' || word[j-1] > 'o')) break;
            if (ispunct(word[j]) || !isalpha(word[j+1])) continue;
            if (ispunct(word[j]) || !islower(word[j+1])) continue;
            if (ispunct(word[j]) && isupper(word[j+1])) continue;
            return to_string(word[i]);
        }
    }
    return "";
}