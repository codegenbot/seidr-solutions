int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> findSubstringIndices(string text, string target) {
    vector<int> indices;
    if (target.empty())
        return indices;
    
    int tlen = target.size();
    for (int i = 0; i <= text.size() - tlen; ++i) {
        if (text.substr(i, tlen) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}