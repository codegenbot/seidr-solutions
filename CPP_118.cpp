Here is the solution:

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (ispunct(word[i])) continue;
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i-1]) || i == 0) return string(1, tolower(word[i]));
    }
    return "";
}