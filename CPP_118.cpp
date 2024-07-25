string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isalpha(word[right])) continue;
        if (ispunct(word[right]) || isupper(word[right])) continue;
        if (vowels.find(toupper(word[right])) != string::npos) {
            return string(1, toupper(word[right]));
        }
    }
    for (int i = 0; i < word.size(); ++i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isupper(word[i])) continue;
        if (vowels.find(toupper(word[i])) != string::npos) {
            return string(1, toupper(word[i]));
        }
    }
    return "";
}