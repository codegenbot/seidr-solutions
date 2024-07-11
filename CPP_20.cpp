bool issame(pair<float, float> a, pair<float, float> b) {
    return abs(a.first - b.first) < 1e-6 && abs(a.second - b.second) < 1e-6;
}