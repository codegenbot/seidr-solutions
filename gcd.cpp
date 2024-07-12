int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> findIndicesOfSubstring(string text, string target) {
    vector<int> indices;
    int n = text.length();
    int m = target.length();
    if (m == 0) {
        return indices;
    }
    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}