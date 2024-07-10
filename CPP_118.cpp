string get_closest_vowel(string word) {
    int left = 0, right = word.length();
    while (left < right) {
        if (!isalpha(word[right - 1])) {
            --right;
        } else if (!isalpha(word[left])) {
            ++left;
        } else if (!strncasecmp(&word[right - 1], "aeiouAEIOU", 6)) {
            return &word[right - 1] - 1;
        }
    }
    return "";
}