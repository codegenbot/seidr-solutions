vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == target[j]) {
            j++;
        }
        if (j == m) {
            indices.push_back(i);
        }
    }
    return indices;
}