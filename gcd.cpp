int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) {
        return indices;
    }
    
    int n = text.size();
    int m = target.size();
    
    vector<int> lps(m, 0);
    int len = 0;
    int i = 1;
    
    while (i < m) {
        if (target[i] == target[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    
    int j = 0;
    i = 0;
    
    while (i < n) {
        if (target[j] == text[i]) {
            j++;
            i++;
        }
        
        if (j == m) {
            indices.push_back(i - j);
            j = lps[j - 1];
        } else if (i < n && target[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i = i + 1;
            }
        }
    }
    
    return indices;
}