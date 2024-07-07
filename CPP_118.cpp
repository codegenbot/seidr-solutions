string get_closest_vowel(string word) {
    int start = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isvowel(word[i])) {
            start = i + 1;
            break;
        }
    }

    for (int i = word.size() - 1; i >= start; --i) {
        if (isvowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }

    return "";
}

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}