string get_closest_vowel(string word) {
    int n = word.length();
    int min_dist = n;
    int index = -1;
    
    for (int i = 0; i < n; ++i) {
        if (isvowel(word[i])) {
            int dist = i;
            for (int j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j]) && !isconsonant(word, j)) break;
                else if (!isvowel(word[j]) && isconsonant(word, j)) continue;
                else dist = i;
            }
            if (dist < min_dist) {
                min_dist = dist;
                index = i;
            }
        }
    }
    
    return word[index] == '\0' ? "" : string(1, word[index]);
}