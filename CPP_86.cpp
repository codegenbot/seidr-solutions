string anti_shuffle(const string& s) {
    string ordered_word = s;
    int start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ' || i == s.size() - 1) {
            sort(ordered_word.begin() + start, ordered_word.begin() + i + 1);
            start = i + 1;
        }
    }
    return ordered_word;
}