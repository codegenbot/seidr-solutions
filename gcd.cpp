int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int tlen = target.length();
    int slen = text.length();
    for (int i = 0; i <= slen - tlen; ++i) {
        bool found = true;
        for (int j = 0; j < tlen; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    return indices;
}