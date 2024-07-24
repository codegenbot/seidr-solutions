int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w) {
        vector<int> rev_q = q;
        reverse(rev_q.begin(), rev_q.end());
        if (q == rev_q) {
            return true;
        }
    }
    return false;
}