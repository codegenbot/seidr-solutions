string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || !isupper(word[i]) && !islower(word[i])) continue;
        if ("aeiouAEIOU".find(toupper(word[i])) != string::npos)
            return word.substr(i, 1);
    }
    return "";
}