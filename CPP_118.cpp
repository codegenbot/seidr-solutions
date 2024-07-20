string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            int j;
            for (j = i - 1; j >= 0 && !isVowel(word[j]); --j) {}
            if (j >= 0) return string(1, tolower(word[j]));
        }
    }
    return "";
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}