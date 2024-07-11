string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i > 0; --i) {
        if (!isupper(word[i]) && !islower(word[i])) continue;
        bool found = false;
        for (int j = i - 1; j >= 0; --j) {
            if (!isupper(word[j]) && !islower(word[j])) continue;
            if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || 
                word[j] == 'o' || word[j] == 'u' || word[j] == 'A' || 
                word[j] == 'E' || word[j] == 'I' || word[j] == 'O' || 
                word[j] == 'U') {
                found = true;
                break;
            }
        }
        if (found) return string(1, word[i - 1]);
    }
    return "";
}