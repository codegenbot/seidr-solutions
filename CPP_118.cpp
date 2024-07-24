Here is the completed code:

string get_closest_vowel(string word) {
    int right = 0;
    for (int i = word.size() - 1; i >= 0; --i) {
        if (!isvowel(word[i])) {
            right = i + 1;
        } else if (right != 0 && isvowel(word[i])) {
            return string(1, tolower(word[i]));
        }
    }
    return "";
}

bool isvowel(char c) {
    char x = tolower(c);
    return ((x == 'a') || (x == 'e') || (x == 'i') ||
            (x == 'o') || (x == 'u'));
}