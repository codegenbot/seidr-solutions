string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right && !isVowel(word[left])) left++;
    while (left < right && !isVowel(word[right])) right--;
    for (; left <= right; ) {
        if (isVowel(word[(left + right) / 2])) return word[(left + right) / 2];
        if ((right - left) % 2 == 0) left++;
        else right--;
    }
    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}