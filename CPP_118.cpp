string get_closest_vowel(string word) {
    int i = word.size() - 1; // start from the end of the string
    while (i >= 0 && !isVowel(word[i])) { // move to the left until find a vowel or reach the beginning
        i--;
    }
    if (i < 0) return ""; // no vowel found
    int j = i - 1; // start from the right of the found vowel
    while (j >= 0 && !isConsonant(word[j])) { // move to the left until find a consonant or reach the beginning
        j--;
    }
    if (j < 0) return ""; // no consonant found on the left
    int k = i - 1; // start from the right of the found vowel
    while (k > j && !isConsonant(word[k])) { // move to the left until find a consonant or reach the beginning
        k--;
    }
    while (k >= 0 && !isVowel(word[k])) { // move to the left until find a vowel or reach the beginning
        k--;
    }
    if (k < 0) return ""; // no vowel found on the right
    return word.substr(k + 1, i - k - 1); // return the closest vowel
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isConsonant(char c) {
    c = tolower(c);
    return !isVowel(c);
}