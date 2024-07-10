std::vector<int> findTargetIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;

    for (int i = 0; i <= text.length() - target.length(); ++i) {