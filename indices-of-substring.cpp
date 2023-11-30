std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m + 1; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        if (j == m) {
            indices.push_back(i);
        }
    }

    return indices;
}