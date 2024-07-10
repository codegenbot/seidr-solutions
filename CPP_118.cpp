string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isalpha(word[right])) {
            ++left;
            continue;
        }
        if (ispunct(word[right]) || isupper(word[right])) {
            continue;
        }
        if (word[right] == 'Y' && islower(word[right - 1])) {
            --right;
            continue;
        }
        while (left < right && !isvowel(word[left]))
            ++left;
        return word.substr(left, right - left + 1);
    }
    return "";
}