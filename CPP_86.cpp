string anti_shuffle(const string& s) {
    string ordered_word = s;
    int start = 0;
    for (size_t i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            sort(ordered_word.begin() + start, ordered_word.begin() + i);
            start = i + 1;
        }
    }
    return ordered_word;
}