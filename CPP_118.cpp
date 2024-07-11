Here is the solution:

string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) return string(1, tolower(word[i]));
        while (!isalpha(word[i]) && i > 0) --i;
        if (isalpha(word[i])) return string(1, tolower(word[i]));
    }
    return "";
}