bool below_threshold(const vector<int>& l, int t) {
    return all_of(l.begin(), l.end(), [t](int num) { return num < t; });
}