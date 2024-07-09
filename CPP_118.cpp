string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[left])) left++;
        else if (!isvowel(word[right])) right--;
        else return string(1, word[right]);
    }
    for (int i = left; i < word.size(); i++) {
        if (isvowel(word[i])) return string(1, word[i]);
    }
    return "";
}

bool isvowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
           || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}