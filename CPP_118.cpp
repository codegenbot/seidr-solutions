string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n - 2; ++i) {
        if (!isalpha(word[i])) continue;
        if (!isalpha(word[i + 1]) && !isalpha(word[i + 2])) {
            string s = word.substr(i + 2);
            size_t pos = s.find_first_of("aeiouAEIOU");
            if (pos != string::npos) return s[pos];
        }
    }
    return "";
}