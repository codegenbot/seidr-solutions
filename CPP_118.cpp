string get_closest_vowel(string word) {
    for (int i = word.length() - 3; i >= 1; --i) {
        if (!isvowel(word[i])) {
            continue;
        }
        bool left_consonant = true;
        for (int j = i-1; j > 0; --j) {
            if (!isconsonant(word[j])) {
                left_consonant = false;
                break;
            }
        }
        if (left_consonant) {
            return word.substr(i, 1);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = toupper(c);
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool isconsonant(char c) {
    c = toupper(c);
    return !isvowel(c) && (c >= 'B' && c <= 'Z');
}