Here is the completed code:

string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if (isvowel(word[i])) {
            int j = i;
            while (j > 0 && !isconsonant(word[j-1]))
                --j;
            return word.substr(j, i-j+1);
        }
    }
    return "";
}

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

bool isconsonant(char c) {
    return (c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z');
}