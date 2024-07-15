bool below_threshold(const vector<int>& l, int t) {
    return all_of(begin(l), end(l), [t](int num) { return num < t; });
}