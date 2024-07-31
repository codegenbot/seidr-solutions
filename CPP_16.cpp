int count_distinct_characters(const std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
    std::sort(str.begin(), str.end());
    str.erase(std::unique(str.begin(), str.end()), str.end());
    return str.size();
}