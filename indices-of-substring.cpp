vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != target[j])
                break;
        }
        if (j == m)
            indices.push_back(i);
    }
    return indices;
}