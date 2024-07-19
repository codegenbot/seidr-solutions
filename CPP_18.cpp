int how_many_times(string str, string substring) {
    if (substring.empty()) {
        return 0;
    }

    int count = 0;
    size_t pos = str.find(substring, 0);
    while (pos != string::npos) {
        ++count;
        pos = str.find(substring, pos + 1);
    }

    return count;
}