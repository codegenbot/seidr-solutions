string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n; i++) {
        if (!isalpha(word[i])) continue;
        bool found = false;
        for (int j = i + 1; j < n; j++) {
            if (!isalpha(word[j])) break;
            if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || 
                word[j] == 'o' || word[j] == 'u' || word[j] == 'A' || 
                word[j] == 'E' || word[j] == 'I' || word[j] == 'O' || 
                word[j] == 'U') {
                found = true;
                break;
            }
        }
        if (found) return string(1, word[i]);
    }
    return "";
}