Here is the solution:

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isalpha(word[i])) continue;
        if (!isupper(word[i]) && !islower(word[i])) return "";
        if (vowel(word[i])) return string(1, topper(word[i]));
    }
    return "";
}

bool vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char topper(char c) {
    if (islower(c)) return toupper(c);
    return c;
}