string get_closest_vowel(string word) {
    int left = 0, right = word.length() - 1;
    while (left < right) {
        if (!isvowel(word[left])) {
            left++;
        } else if (!isvowel(word[right])) {
            right--;
        } else {
            return isupper(word[right]) ? "U" : "u";
        }
    }
    for (int i = 0; i < word.length() - 1; i++) {
        if (!isvowel(word[i])) continue;
        if (!isvowel(word[i + 1])) return isupper(word[i]) ? "U" : "u";
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}