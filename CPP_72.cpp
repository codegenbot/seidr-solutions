bool will_it_fly(const vector<int>& q, int w) {
    int sum = accumulate(q.begin(), q.end(), 0);
    
    if (sum <= w) {
        vector<int> reversed_q = q;
        reverse(reversed_q.begin(), reversed_q.end());
        return q == reversed_q;
    }
    
    return false;
}