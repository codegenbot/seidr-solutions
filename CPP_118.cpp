string get_closest_vowel(string word) {
    for (int i = word.size() - 3; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isdigit(word[i])) continue;
        string s = word.substr(i);
        int j = s.find_first_of("aeiouAEIOU");
        if (~j) return s[j];
    }
    return "";
}