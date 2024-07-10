Here is the completed code:

string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (isvowel(word[i])) {
            while (left < i && !isalpha(word[left]) && isalnum(word[left]))
                ++left;
            return string(1, tolower(word[i]));
        }
        ++left;
    }
    return "";
}