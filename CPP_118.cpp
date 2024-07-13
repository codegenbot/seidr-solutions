string get_closest_vowel(string word) {
    for (int i = word.size() - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) continue;
        if (vowels.find(toupper(word[i])) != string::npos)
            return string(1, toupper(word[i]));
    }
    return "";
}