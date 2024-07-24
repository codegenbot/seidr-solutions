string get_closest_vowel(string word) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int n = word.size();
    for (int i = n - 2; i > 0; --i) {
        if (find(begin(vowels), end(vowels), word[i]) != end(vowels)) {
            for (int j = i + 1; j < n - 1; ++j) {
                if ((word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u' &&
                     word[j] != 'A' && word[j] != 'E' && word[j] != 'I' && word[j] != 'O' && word[j] != 'U') &&
                    (word[j + 1] == 'a' || word[j + 1] == 'e' || word[j + 1] == 'i' || word[j + 1] == 'o' || word[j + 1] == 'u' ||
                     word[j + 1] == 'A' || word[j + 1] == 'E' || word[j + 1] == 'I' || word[j + 1] == 'O' || word[j + 1] == 'U')) {
                    return string(1, word[i]);
                }
            }
        }
    }
    return "";
}