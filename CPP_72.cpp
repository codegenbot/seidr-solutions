int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum > w) {
        return false;
    }
    
    vector<int> reversed(q.rbegin(), q.rend());
    return q == reversed;
}