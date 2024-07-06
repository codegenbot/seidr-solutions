string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int j;
            for (j = i - 1; j >= 0; --j) {
                if (!isvowel(word[j]) && !ispunctuation(word[j]))
                    break;
            }
            return word.substr(j + 1, i - j);
        }
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool ispunctuation(char c) {
    return (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
           c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U');
}