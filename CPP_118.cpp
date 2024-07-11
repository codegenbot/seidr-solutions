string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right && !isvowel(word[left])) left++;
    while (left < right && !isvowel(word[right])) right--;
    for (; left < right; ) {
        if (isvowel(word[++left])) return string(1, word[left]);
        if (isvowel(word[--right])) return string(1, word[right]);
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}