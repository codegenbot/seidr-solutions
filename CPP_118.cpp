std::string get_closest_vowel(std::string word) {
    int left = 0;
    for (int right = word.size() - 1; left <= right; ) {
        if (!isvowel(word[left])) {
            ++left;
        } else if (!isvowel(word[right])) {
            --right;
        } else {
            return isvowel(word[left]) ? std::string(1, tolower(word[left])) : std::string(1, tolower(word[right]));
        }
    }
    return "";
}