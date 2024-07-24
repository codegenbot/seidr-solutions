int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum > w) {
        return false;
    }
    
    vector<int> q_rev = q;
    reverse(q_rev.begin(), q_rev.end());
    if (q == q_rev) {
        return true;
    } else {
        return false;
    }
}