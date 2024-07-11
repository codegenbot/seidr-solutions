string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[right])) {
            --right;
        } else if (!isvowel(word[left])) {
            ++left;
        } else {
            return isupper(word[right]) ? "U" : "u";
        }
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}