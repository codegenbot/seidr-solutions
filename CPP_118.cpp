string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i >= 0; --i) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            int left = i;
            while (left > 0 && !isvowel(tolower(word[left - 1])))
                --left;
            return word.substr(left, i - left + 1);
        }
    }
    return "";
}