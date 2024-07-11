string get_closest_vowel(string word) {
    int n = word.length();
    for (int i = n - 1; i >= 0; --i) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            int left = i;
            while (left > 0 && !isVowel(word[left - 1]))
                left--;
            return word.substr(left - 1, 1);
        }
    }
    return "";
}

bool isVowel(char c) {
    return tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' ||
           tolower(c) == 'o' || tolower(c) == 'u';
}