string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (isvowel(word[i])) {
            int left = i + 1;
            while (left < word.length() && !isconsonant(word[left]))
                ++left;
            if (left - i > 1) {
                result = string(1, word[i]);
                break;
            }
        }
    }
    return result;
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

bool isconsonant(char c) {
    c = tolower(c);
    return !isvowel(c) && (c >= 'b' && c <= 'z');
}