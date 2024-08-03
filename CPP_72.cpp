bool will_it_fly(const vector<int>& q, int w) {
    return accumulate(q.begin(), q.end(), 0) <= w && equal(q.begin(), q.end(), q.rbegin());
}