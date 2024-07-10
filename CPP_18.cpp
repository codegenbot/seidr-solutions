int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    for (size_t i = 0; (pos = str.find(substring, i)) != string::npos;) {
        ++count;
        i = pos + substring.length();
    }
    return count;
}