int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        str = str.substr(pos + substring.length());
    }
    return count;
}