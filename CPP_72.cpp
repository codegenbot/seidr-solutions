bool will_it_fly(vector<int> q, int w) {
    if (q.size() == 1 || equal(q.begin(), q.begin() + q.size()/2, q.rbegin())) {
        return accumulate(q.begin(), q.end(), 0) <= w;
    }
    return false;
}