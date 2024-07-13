string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            for (int j = i + 1; j < n; ++j) {
                if (!isalpha(word[j])) break;
                char d = tolower(word[j]);
                if (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u') continue;
                return (c == tolower(word[i + 1]) ? string(1, c) : string(1, toupper(c)));
            }
        }
    }
    return "";
}