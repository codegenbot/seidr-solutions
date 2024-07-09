string get_closest_vowel(string word) {
    for(int i = word.size() - 2; i >= 0; --i) {
        if(strchr("aeiouAEIOU", word[i]) != NULL) {
            return string(1, word[i]);
        }
    }
    return "";
}