string get_closest_vowel(string word) {
    int left = 0, right = word.length() - 1;
    while (left < right && (!isvowel(word[left]) || !isvowel(word[right]))) {
        if (!isvowel(word[left])) left++;
        else if (!isvowel(word[right])) right--;
    }
    for (int i = left; i <= right; i++) {
        if (isvowel(word[i])) return word.substr(i, 1);
    }
    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}