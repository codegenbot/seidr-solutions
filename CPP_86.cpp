string ordered_word = s;
    size_t start = 0;
    size_t found = ordered_word.find(' ');

    while (found != string::npos) {
        string curr_word = ordered_word.substr(start, found - start);
        sort(curr_word.begin(), curr_word.end());
        ordered_word.replace(start, curr_word.length(), curr_word);
        start = found + 1;
        found = ordered_word.find(' ', start);
    }

    string last_word = ordered_word.substr(start);
    sort(last_word.begin(), last_word.end());
    ordered_word.replace(start, last_word.length(), last_word);

    return ordered_word;
}