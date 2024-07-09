bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](int x) {
        return any_of(b.begin(), b.end(), [&](int y) { return y == x; });
    });
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).good()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}