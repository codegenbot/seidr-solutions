int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty())
        return indices;
    
    for (int i = 0; i <= int(text.size()) - int(target.size()); ++i) {
        bool found = true;
        for (int j = 0; j < int(target.size()); ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found)
            indices.push_back(i);
    }
    
    return indices;
}