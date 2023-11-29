std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int len = target.length();
    int n = text.length();

    for (int i = 0; i < n - len + 1; ++i) {
        bool found = true;
        for (int j = 1; j <= len; ++j) {
            if (text[i + j - 1] != target[j - 1]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}