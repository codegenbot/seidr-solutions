string get_closest_vowel(string word) {
    int left = 0, right = word.length() - 1;
    while (left < right && (!isvowel(word[left]) || !isconsonant(word[right]))) {
        if (!isvowel(word[left])) left++;
        if (!isconsonant(word[right])) right--;
    }
    for (; left < right; ) {
        if (isvowel(word[left])) return string(1, word[left]);
        left++;
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c) {
    c = tolower(c);
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}