string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) {
            left++;
        } else if (!isvowel(word[right])) {
            right--;
        } else {
            return isupper(word[right]) ? "U" : "u";
        }
    }
    for (int i = 1; i < word.size() - 1; i++) {
        if (!isvowel(word[i])) continue;
        int j = i + 1;
        while (j < word.size() && !isconsonant(word[j])) j++;
        if (j > i) return isupper(word[j-1]) ? "U" : "u";
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c) {
    c = tolower(c);
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}