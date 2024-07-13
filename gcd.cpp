int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int t_len = target.length();
    for (int i = 0; i <= text.length() - t_len; ++i) {
        if (text.substr(i, t_len) == target) {
            for (int j = 0; j < t_len; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}