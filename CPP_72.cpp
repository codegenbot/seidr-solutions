bool will_it_fly(vector<int> q, int w) {
    int n = q.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += q[i];
    }
    if (sum > w) {
        return false;
    }
    for (int i = 0; i < n / 2; ++i) {
        if (q[i] != q[n - 1 - i]) {
            return false;
        }
    }
    return true;
}