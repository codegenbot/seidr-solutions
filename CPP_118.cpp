string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isalpha(word[left])) ++left;
        if (!isalpha(word[right])) --right;
    }
    for (; left < right; ) {
        if (isvowel(word[left])) return string(1, tolower(word[left]));
        if (isvowel(word[right])) return string(1, tolower(word[right]));
        if (!isalpha(word[left])) ++left;
        if (!isalpha(word[right])) --right;
    }
    return "";
}