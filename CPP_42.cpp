bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        a[i]++;
    }
    return a == b;
}