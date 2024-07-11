bool issame(vector<float> a, vector<float> b){
    return abs(a.size() - b.size()) < 1e-9 && equal(a.begin(), a.end(), b.begin(), [](float x, float y){ return abs(x - y) < 1e-9; });
}

// In the main function:
assert(issame(get_positive({}), {}));