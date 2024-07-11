string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isvowel(word[i])) {
            left = i + 1;
            break;
        }
    }

    int right = word.size();
    for (int i = 0; i < word.size(); ++i) {
        if (!isvowel(word[i])) {
            right = i;
            break;
        }
    }

    for (int i = left; i < right; ++i) {
        if (isvowel(word[i])) {
            return string(1, word[i]);
        }
    }

    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}