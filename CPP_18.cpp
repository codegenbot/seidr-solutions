int how_many_times(string str, string substring) {
    if (str.empty() || substring.empty()) return 0;
    int count = 0;
    for (size_t i = 0; i <= str.length() - substring.length(); ++i) {
        if (str.substr(i, substring.length()) == substring) {
            count++;
        }
    }
    return count;
}