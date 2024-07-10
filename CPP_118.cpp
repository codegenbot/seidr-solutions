string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right && (!isVowel(word[left]) || !isVowel(word[right]))) {
        if (!isConsonant(word[left])) left++;
        else if (!isConsonant(word[right])) right--;
    }
    for (int i = left; i < right; i++) {
        if (isVowel(word[i]))
            return word[i];
    }
    return "";
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool isConsonant(char c) {
    return (!isVowel(c));
}