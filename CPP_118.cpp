string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        if (vowels.find(toupper(word[i])) != string::npos)
            return toupper(word[i]);
    }
    return "";
}