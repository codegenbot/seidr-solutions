vector<float> get_positive(vector<float> v) {
    vector<float> result;
    for (float x : v) {
        if (x > 0) result.push_back(x);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}