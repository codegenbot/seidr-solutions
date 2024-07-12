int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int tlen = target.length();
    for (int i = 0; i <= text.length() - tlen; ++i) {
        if (text.substr(i, tlen) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}