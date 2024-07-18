string ordered_word = s;
    int start = 0;
    for (int i = 0; i <= s.size(); i++) {
        if (s[i] == ' ' || i == s.size()) {
            sort(ordered_word.begin() + start, ordered_word.begin() + i);
            start = i + 1;
        }
    }
    return ordered_word;
}