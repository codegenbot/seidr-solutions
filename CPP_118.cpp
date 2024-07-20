string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right && !isvowel(word[left])) left++;
    while (right > left && !isvowel(word[right])) right--;
    if (right == left) return "";
    for (; left <= right; ) {
        if (isvowel(word[left])) return word.substr(left, 1);
        left++;
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}