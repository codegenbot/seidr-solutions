bool will_it_fly(const vector<int>& q, int w) {
    int sum = accumulate(q.begin(), q.end(), 0);
    
    if (q.size() <= 1) {
        return sum <= w;
    }
    
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            return false;
        }
    }
    
    return sum <= w;
}