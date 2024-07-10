vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();
    
    if (m == 0)
        return indices;

    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int j = 0; j < m; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    
    return indices;
}