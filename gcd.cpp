int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int found = text.find(target, 0);
    while (found != string::npos) {
        indices.push_back(found);
        found = text.find(target, found + 1);
    }
    return indices;
}