string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i >= 0; --i) {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || 
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || 
            word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || 
            word[i] == 'U') {
            int j = i - 1;
            while (j >= 0 && !isVowel(word[j])) --j;
            if (j < 0) return string(1, word[i]);
            int k = i + 1;
            while (k < n && !isVowel(word[k])) ++k;
            if (k > i) {
                if (i - j <= k - i) return string(1, word[i]);
                else return string(1, word[k - 1]);
            }
        }
    }
    return "";
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}