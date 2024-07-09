string get_closest_vowel(string word) {
    int i = word.size() - 1; // start from the end of the word
    while (i >= 0 && !isVowel(word[i])) { // move left until find a vowel or reach the beginning
        i--;
    }
    if (i < 0) return ""; // no vowel found
    int j = i - 1; // start from the second last character
    while (j >= 0 && !isVowel(word[j])) { // move left until find a vowel or reach the beginning
        j--;
    }
    if (j < 0) return ""; // no vowel found between two consonants
    return word.substr(j + 1, i - j); // return the closest vowel
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}