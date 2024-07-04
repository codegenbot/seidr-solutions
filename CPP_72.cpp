bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    int n = q.size();
    for(int i = 0; i < n; ++i) {
        sum += q[i];
        if(q[i] != q[n - i - 1]) {
            return false;
        }
    }
    return sum <= w;
}