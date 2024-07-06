string get_closest_vowel(string word) {
    int n = word.size();
    for(int i = n - 1; i > 0; --i) {
        if (ispunct(word[i])) continue;
        if (isupper(word[i]) || islower(word[i])) {
            bool foundVowel = false;
            for(int j = i - 1; j >= 0; --j) {
                if (ispunct(word[j])) break;
                if (ispunct(word[j])) continue;
                if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' 
                    || word[j] == 'o' || word[j] == 'u' || word[j] == 'A' 
                    || word[j] == 'E' || word[j] == 'I' || word[j] == 'O' 
                    || word[j] == 'U') {
                    foundVowel = true;
                    break;
                }
            }
            if (foundVowel) return string(1, topper(word[i]));
        }
    }
    return "";
}