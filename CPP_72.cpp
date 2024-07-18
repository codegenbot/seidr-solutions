int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum <= w) {
        vector<int> reversed_q(q.rbegin(), q.rend());
        if (q == reversed_q) {
            return true;
        }
    }
    
    return false;
}