Here is the completed code:

string get_closest_vowel(string word) {
    int left = 0, right = word.size() - 1;
    while (left < right) {
        if (!isvowel(word[right])) {
            --right;
        } else if (!isvowel(word[left])) {
            ++left;
        } else {
            return word.substr(left + 1, right - left - 1);
        }
    }
    return "";
}

bool isvowel(char c) {
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}