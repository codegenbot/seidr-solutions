bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}