std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLen = target.length();
    int textLen = text.length();

    for (int i = 0; i < textLen - targetLen + 1; i++) {
        if (text.substr(i, targetLen) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}