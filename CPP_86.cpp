string ordered_word = s;
    size_t start = 0;
    size_t end = 0;
    while ((end = ordered_word.find(" ", start)) != string::npos) {
        sort(ordered_word.begin() + start, ordered_word.begin() + end);
        start = end + 1;
    }
    sort(ordered_word.begin() + start, ordered_word.end());
    return ordered_word;
}