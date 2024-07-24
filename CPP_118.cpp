string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right > 0; --right) {
        if (!isvowel(word[right])) {
            while (!isvowel(word[left]) && left < right)
                ++left;
            return isvowel(word[left]) ? string(1, tolower(word[left])) : "";
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}