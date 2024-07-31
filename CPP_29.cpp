std::vector<std::pair<std::string, std::string>> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back({prefix, s});
    }
    return result;
}