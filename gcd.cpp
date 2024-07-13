int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int tlen = target.length();
    if (tlen == 0) return indices;

    for (int i = 0; i <= int(text.length()) - tlen; ++i) {
        if (text.substr(i, tlen) == target) {
            indices.push_back(i);
        }
    }

    return indices;
}