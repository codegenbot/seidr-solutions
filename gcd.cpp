int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();
    
    for (int i = 0; i <= textLength - targetLength; ++i) {
        bool found = true;
        for (int j = 0; j < targetLength; ++j) {
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