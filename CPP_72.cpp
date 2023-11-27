bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w) {
        for (int i = 0, j = q.size() - 1; i < j; i++, j--) {
            if (q[i] != q[j]) {
                return false;
            }
        }
        return true;
    }
    return false;
}