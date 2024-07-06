bool issame(vector<int> a, vector<int>b) {
    if(a.size() != b.size()) 
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}