int how_many_times(string s, string sub) {
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find(sub)) != string::npos) {
        ++count;
        s = s.substr(0, pos) + s.substr(pos + sub.length());
    }
    return count;
}