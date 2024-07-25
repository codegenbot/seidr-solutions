string get_closest_vowel(string word) {
    int left = 0, right = word.length() - 1;
    while (left < right && !isvowel(word[left])) left++;
    while (left < right && !isvowel(word[right])) right--;
    for (; left < right; ) {
        if (isvowel(word[left + 1])) return string(1, word[left + 1]);
        left++;
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}