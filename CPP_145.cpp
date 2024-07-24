bool issame(vector<int> a, vector<int> b) {
    int sum_a = accumulate(a.begin(), a.end(), 0);
    int sum_b = accumulate(b.begin(), b.end(), 0);
    return sum_a == sum_b;
}

bool order_by_points(const vector<int>& v1, const vector<int>& v2) {
    return v1 < v2;
}