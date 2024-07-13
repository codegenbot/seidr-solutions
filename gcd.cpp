int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int m = text.size();
    int n = target.size();

    for (int i = 0; i <= m - n; ++i) {
        bool found = true;
        for (int j = 0; j < n; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int k = 0; k < n; ++k) {
                indices.push_back(i + k);
            }
        }
    }

    return indices;
}