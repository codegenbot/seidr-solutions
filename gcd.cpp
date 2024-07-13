int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int text_length = text.size();
    int target_length = target.size();
    
    for (int i = 0; i <= text_length - target_length; ++i) {
        bool found = true;
        for (int j = 0; j < target_length; ++j) {
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