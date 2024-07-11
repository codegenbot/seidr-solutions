int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

vector<int> findSubstringIndices(const string& text, const string& target) {
    vector<int> indices;
    int pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}