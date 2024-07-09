bool issame(const vector<float>& a, const vector<float>& b) {
    return (a.size() == b.size()) && std::all_of(a.begin(), a.end(), [b](float x) { return abs(x - *std::next(b.begin())) < 0.0001; });
}