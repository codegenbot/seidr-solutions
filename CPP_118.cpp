string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = n - 1; i >= 0; --i) {
        if (!isalnum(word[i])) continue;
        bool isVowel = false;
        for (int j = i + 1; j < n && !isVowel; ++j) {
            if (!isalnum(word[j])) continue;
            isVowel = true;
        }
        if (isVowel) return string(1, word[i]);
    }
    return "";
}