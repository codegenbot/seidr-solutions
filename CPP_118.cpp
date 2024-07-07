string get_closest_vowel(string word) {
    int left = 0, right = word.length() - 1;
    while (left < right && !isVowel(word[left])) left++;
    while (left < right && !isVowel(word[right])) right--;
    for (int i = left; i < right; i++) {
        if (isVowel(word[i])) return string(1, word[i]);
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}