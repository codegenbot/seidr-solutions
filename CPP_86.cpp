string ordered_word = s;
    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            continue;
        }
        size_t j = i;
        while (j < s.size() && s[j] != ' ') {
            ++j;
        }
        sort(ordered_word.begin() + i, ordered_word.begin() + j);
        i = j;
    }
    return ordered_word;
}