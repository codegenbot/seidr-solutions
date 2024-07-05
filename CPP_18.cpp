int how_many_times(string str, string substring) {
    if (substring.empty()) return 0;
    int count = 0;
    for (size_t pos = 0; (pos = str.find(substring, pos)) != string::npos; ++pos) {
        ++count;
    }
    return count;
}