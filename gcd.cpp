int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    if (target.empty()) return indices;
    
    for (int i = 0; i <= (int)text.size() - (int)target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < (int)target.size(); ++j) {
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