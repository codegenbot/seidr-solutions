std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    int prev_idx = -1;
    std::vector<int> result;
    for (size_t i = 0; i < text.length(); ++i) {
        if (text.substr(i, target.length()) == target && i >= prev_idx + target.length()) {
            result.push_back(i);
            prev_idx = i;
        }
    }
    return result;
}