std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int pos = text.find(target);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + target.size());
    }
    return indices;
}