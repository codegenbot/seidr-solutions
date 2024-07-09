string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isvowel(word[right])) continue;
        while (left < right && !isconsonant(word[left]))
            ++left;
        return string(1, word.substr(left, right - left + 1).find_first_of("aeiouAEIOU"));
    }
    return "";
}

bool isconsonant(char c) {
    return !isvowel(c);
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}