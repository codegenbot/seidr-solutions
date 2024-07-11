int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> findSubstringIndices(string text, string target) {
    vector<int> indices;
    int tlen = target.length();
    int slen = text.length();
    for (int i = 0; i <= slen - tlen; ++i) {
        if (text.substr(i, tlen) == target) {
            for (int j = 0; j < tlen; ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}