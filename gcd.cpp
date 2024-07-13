int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int tlen = target.size();
    for (int i = 0; i <= text.size() - tlen; ++i) {
        if (text.substr(i, tlen) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}