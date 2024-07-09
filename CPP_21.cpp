bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        throw runtime_error("Vector sizes do not match");
    for (int i = 0; i < a.size(); i++)
        if (abs(a[i] - b[i]) > 1e-5)
            return false;
    return true;
}