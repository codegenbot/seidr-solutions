bool issame(vector<float> a,vector<float>b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}