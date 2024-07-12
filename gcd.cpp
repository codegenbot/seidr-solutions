int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int m = target.length();
    int n = text.length();
    
    for (int i = 0; i <= n - m; ++i) {
        int j;
        for (j = 0; j < m; ++j) {
            if (text[i + j] != target[j])
                break;
        }
        if (j == m)
            indices.push_back(i);
    }
    
    return indices;
}