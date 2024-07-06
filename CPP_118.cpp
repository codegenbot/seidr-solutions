string get_closest_vowel(string word) {
    int n = word.length();
    int minDist = n;
    char closestVowel = ' ';

    for (int i = 0; i < n; ++i) {
        if (isvowel(word[i])) {
            for (int j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j]) && !isconsonant(word, j)) break;
                else if (!isvowel(word[j]) && isconsonant(word, j)) continue;
                else if (i - j < minDist) {
                    minDist = i - j;
                    closestVowel = word[i];
                }
            }
        }
    }

    return string(1, closestVowel);
}