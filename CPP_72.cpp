int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    vector<int> rev_q = q;
    reverse(rev_q.begin(), rev_q.end());
    return (q == rev_q) && (sum <= w);
}