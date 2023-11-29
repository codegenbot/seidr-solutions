std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int len = target.length();
    int n = text.length();

    for (int i = 0; i <= n - len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (text[i + j] != target[j]) {
                break;
            }
            if (j == len - 1) {
                indices.push_back(i);
            }
        }
    }

    return indices;
}