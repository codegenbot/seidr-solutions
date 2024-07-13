int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.length() - target.length(); ++i) {
        bool found = true;
        for (int j = 0; j < target.length(); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            for (int j = 0; j < target.length(); ++j) {
                indices.push_back(i + j);
            }
        }
    }
    return indices;
}