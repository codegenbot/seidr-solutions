string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isalpha(word[i]) || isvowel(word[i])) {
            break;
        }
        ++left;
    }

    if (left == word.size()) return "";

    int right = left + 1;
    while (right < word.size() && !isalpha(word[right]) && !isvowel(word[right]))
        ++right;

    for (; right > left; --right) {
        if (isvowel(word[right])) {
            return string(1, tolower(word[right]));
        }
    }

    return "";
}