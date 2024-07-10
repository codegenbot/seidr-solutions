string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' ||
            tolower(word[i]) == 'i' || tolower(word[i]) == 'o' ||
            tolower(word[i]) == 'u') {
            return word.substr(i, 1);
        }
    }
    return "";
}