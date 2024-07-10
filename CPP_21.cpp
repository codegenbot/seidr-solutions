bool issame(vector<float> a, vector<float> b) {
    assert(a.size() == b.size());
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}