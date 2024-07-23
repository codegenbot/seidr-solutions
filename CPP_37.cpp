bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(),
          [b](float x) { return abs(x - *min_element(b.begin(), b.end())) <= 1e-6; });
}