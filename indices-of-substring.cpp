std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int targetLen = target.length();
    int textLen = text.length();

    for (int i = 0; i <= textLen - targetLen; i += (targetLen - 1)) {
        if (text.substr(i, targetLen) == target.substr(0, targetLen - i)) {
            indices.push_back(i);
        }
    }

return indices;
}