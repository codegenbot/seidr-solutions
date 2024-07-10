```cpp
bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i].length() != b[i].length()) return false;
        sort(a[i].begin(), a[i].end());
        sort(b[i].begin(), b[i].end());
        if (a[i] != b[i]) return false;
    }
    
    return true;
}