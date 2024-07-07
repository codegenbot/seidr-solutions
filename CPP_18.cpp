int how_many_times(string str, string substring) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find(substring)) != string::npos) {
        ++count;
        if (pos + substring.size() < str.size()) {
            str.erase(0, pos + substring.size());
        } else {
            break;
        }
    }
    return count;
}