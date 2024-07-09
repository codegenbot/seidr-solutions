```bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& vec) {
    return v1.size() == vec.size() && std::equal(v1.begin(), v1.end(), vec.begin());
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& vec, const std::string& prefix) {
    return {str for str in vec if str.find(prefix) == 0};
}

assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));