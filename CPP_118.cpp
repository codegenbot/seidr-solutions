string get_closest_vowel(string word) {
    int i = word.size() - 1; // Start from the end of the string
    while (i >= 0 && !isVowel(word[i])) {
        i--; // Keep moving left until we find a vowel or reach the start
    }
    if (i < 0) return ""; // If no vowel is found, return an empty string

    int j = i - 1; // Start from the right of the vowel
    while (j >= 0 && !isConsonant(word[j])) {
        j--; // Keep moving left until we find a consonant or reach the start
    }
    if (j < 0) return ""; // If no consonant is found, return an empty string

    int k = i - 1; // Start from the right of the vowel and move to the left
    while (k >= j && !isVowel(word[k])) {
        k--; // Keep moving until we find a vowel that stands between two consonants
    }
    if (k < j) return ""; // If no suitable vowel is found, return an empty string

    return word.substr(k + 1, i - k - 1); // Return the closest vowel
}

bool isVowel(char c) {
    c = toupper(c);
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool isConsonant(char c) {
    c = toupper(c);
    for (int i = 0; i < 26; i++) {
        if (c == 'A' + i) continue;
        if (c == 'E' + i) continue;
        if (c == 'I' + i) continue;
        if (c == 'O' + i) continue;
        if (c == 'U' + i) continue;
        return true; // If it's not a vowel, it's a consonant
    }
    return false; // Default is that the character is a vowel
}