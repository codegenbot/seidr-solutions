bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        throw runtime_error("Vectors of different sizes");
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6) {
            throw runtime_error("Vectors are not the same within tolerance");
        }
    }
    return true;
}