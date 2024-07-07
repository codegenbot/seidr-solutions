string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right > left; --right) {
        if (!isvowel(word[right])) {
            while (!isvowel(word[left]) && left < right) {
                ++left;
            }
            if (left < right) {
                return string(1, tolower(word[right]));
            }
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}